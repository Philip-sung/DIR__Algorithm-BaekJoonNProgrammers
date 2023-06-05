#include <string>
#include <vector>
#include <deque>
#include <cctype>

using namespace std;

int solution(int cacheSize, vector<string> cities) {
    int answer = 0;
    deque<string> cacheQue;
    
    if(cacheSize == 0){
        return cities.size() * 5;
    }
    
    for(string s : cities){
        string city = "";
        bool hit = false;
        int idx = 0;
        
        for(char c : s){
            city += tolower(c);
        }
        
        for(string cache : cacheQue){
            if(city == cache){
                hit = true;
                break;
            }
            idx++;
        }
        
        if(hit){
            cacheQue.erase(cacheQue.begin() + idx);
            cacheQue.emplace_back(city);
            answer += 1;
        }
        else if(!hit && cacheQue.size() < cacheSize){
            cacheQue.emplace_back(city);
            answer += 5;
        }
        else if(!hit && cacheQue.size() == cacheSize){
            cacheQue.pop_front();
            cacheQue.emplace_back(city);
            answer += 5;
        }
    }
    
    return answer;
}