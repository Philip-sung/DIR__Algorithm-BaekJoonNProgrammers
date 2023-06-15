#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <sstream>

using namespace std;

vector<int> solution(vector<int> fees, vector<string> records) {
    vector<int> answer;
    map<int,int> car_Time;
    unordered_map<int,int> ioTable;
    int baseTime = fees.at(0);
    int baseFee = fees.at(1);
    int timeUnit = fees.at(2);
    int feeUnit = fees.at(3);
    stringstream recordStream;
    
    for(string s : records){
        recordStream.str(s);
        string temp = "";
        int minute = 0;
        int carNum = 0;
        string io = "";
        
        getline(recordStream, temp, ':'); minute += stoi(temp) * 60;
        getline(recordStream, temp, ' '); minute += stoi(temp);
        getline(recordStream, temp, ' '); carNum = stoi(temp);
        getline(recordStream, io);
        
        if(io == "IN"){
            ioTable.emplace(carNum,minute);
            if(car_Time.find(carNum) == car_Time.end())
                car_Time.emplace(carNum, 0);
        }
        else if(io == "OUT"){
            unordered_map<int,int>::iterator iter = ioTable.find(carNum);
            int time = minute - ioTable.at(carNum);
            car_Time.at(carNum) += time;
            ioTable.erase(iter);
        }
        recordStream.str("");
        recordStream.clear();
    }
    
    for(pair<int,int> p : ioTable){
        int time = 1439 - p.second;
        car_Time.at(p.first) += time;
    }
    
    for(pair<int,int> p : car_Time){
        int fee = baseFee;
        if(p.second >= baseTime){
            int exceedTime = p.second - baseTime;
            
            if(exceedTime % timeUnit == 0)
                fee += (exceedTime / timeUnit) * feeUnit;
            else if(exceedTime % timeUnit != 0)
                fee += ((exceedTime / timeUnit) + 1) * feeUnit;
        }
        answer.push_back(fee);
    }
    
    return answer;
}