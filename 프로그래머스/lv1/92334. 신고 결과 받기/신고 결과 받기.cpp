#include <string>
#include <vector>
#include <sstream>
#include <unordered_map>
#include <set>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> id_list, vector<string> report, int k) {
    vector<int> answer;
    unordered_map<string, set<string>> reportMap;
    unordered_map<string, int> emailMap;
    
    for(string id : id_list){
        set<string> s;
        reportMap.insert(pair<string,set<string>>(id, s));
        
        emailMap.insert(pair<string,int>(id, 0));
    }
    
    stringstream ss;
    for(string s : report){
        string reporter;
        string reported;
        ss.str(s);
        
        ss >> reporter;
        ss >> reported;
        reportMap[reported].insert(reporter);
        ss.clear();
    }
    
    
    for(pair<string, set<string>> p : reportMap){
        if(p.second.size() >= k){
            for(string s : p.second){
                emailMap[s]++;
            }
        }
    }
    
    for (string s : id_list){
        answer.push_back(emailMap[s]);
    }
    
    return answer;
}