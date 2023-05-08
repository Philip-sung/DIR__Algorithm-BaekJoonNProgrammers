#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> unable = {"ayaaya", "yeye", "woowoo", "mama"};
    vector<string> able = {"aya", "ye", "woo", "ma"};
    
    for(string b : babbling){
        for(string s : unable){
            while(b.find(s) != std::string::npos){
                size_t idx = b.find(s);
                int len = s.length();
                b.replace(idx, len, "!");
            }
        }
        for(string s : able){
            while(b.find(s) != std::string::npos){
                size_t idx = b.find(s);
                int len = s.length();
                b.replace(idx, len, ".");
            }
        }
        while(b.find(".") != std::string::npos){
            size_t idx = b.find(".");
            int len = 1;
            b.replace(idx, len, "");
        }
        if(b.length() == 0)
            answer++;
    }
    
    return answer;
}