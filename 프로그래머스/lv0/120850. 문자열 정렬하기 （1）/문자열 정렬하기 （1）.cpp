#include <string>
#include <vector>
#include <cctype>

using namespace std;

vector<int> solution(string my_string) {
    vector<int> answer;
    vector<int> intArr;
    for (int i = 0; i < my_string.length(); i++){
        if(isdigit(my_string.at(i)))
            intArr.push_back(stoi(my_string.substr(i,1)));
    }
    
    while(intArr.size() > 0){
        int idx = 0;
        int min = 10;
        
        for (int i = 0; i < intArr.size(); i++){
            if (intArr.at(i) < min){
                min = intArr.at(i);
                idx = i;
            }
        }
        answer.push_back(min);
        intArr.erase(intArr.begin() + idx);     
    }
    return answer;
}