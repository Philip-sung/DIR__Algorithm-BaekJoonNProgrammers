#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> record) {
    vector<string> answer;
    unordered_map<string,string> uidToNickname;
    stringstream ss;
    
    for(string s : record){
        string action = "";
        string uid = "";
        string nickname = "";
        
        ss.str(s);
        getline(ss, action, ' ');
        getline(ss, uid, ' ');
        getline(ss, nickname);
        
        if(action == "Enter"){
            uidToNickname[uid] = nickname;
        }
       else if(action == "Change"){
            uidToNickname[uid] = nickname;
        }
        
        ss.clear();
        ss.str("");
    }
    
    for(string s : record){
        string action = "";
        string uid = "";
        
        ss.str(s);
        getline(ss, action, ' ');
        getline(ss, uid, ' ');
        
        if(action == "Enter"){
            string alert = uidToNickname[uid] + "님이 들어왔습니다.";
            answer.emplace_back(alert);
        }
        else if(action == "Leave"){
            string alert = uidToNickname[uid] + "님이 나갔습니다.";
            answer.emplace_back(alert);
        }
        ss.clear();
        ss.str("");
    }
    
    
    return answer;
}