#include <string>
#include <vector>
#include <sstream>
#include <map>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    stringstream ss;
    string buf;
    
    ss.str(today);
    getline(ss,buf,'.');
    int tyear = stoi(buf);
    getline(ss,buf,'.');
    int tmonth = stoi(buf);
    getline(ss,buf,'.');
    int tday = stoi(buf);
    
    map<char,int> termMap;
    for(string s : terms){
        ss.clear();
        ss.str(s);
        getline(ss,buf,' ');
        char term = buf.at(0);
        getline(ss,buf,' ');
        int duration = stoi(buf);
        termMap.insert(std::pair<char,int>(term,duration));
    }
    
    for(int i = 0; i < privacies.size(); i++){
        ss.clear();
        string s = privacies.at(i);
        ss.str(s);
        getline(ss, buf, '.');
        int pyear = stoi(buf);
        getline(ss, buf, '.');
        int pmonth = stoi(buf);
        getline(ss, buf, ' ');
        int pday = stoi(buf);
        getline(ss, buf, ' ');
        char term = buf.at(0);
        
        if(tyear * 28 * 12 + tmonth * 28 + tday >
           pyear * 28 * 12 + pmonth * 28 + pday + termMap[term] * 28 - 1){
            answer.push_back(i+1);
        }
    }    
    
    return answer;
}