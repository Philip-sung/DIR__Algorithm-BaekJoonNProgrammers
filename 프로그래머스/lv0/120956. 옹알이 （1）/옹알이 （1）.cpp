#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    vector<string> availableBab = {"aya", "ye", "woo", "ma"};
    for (string s : babbling){
        for(string b : availableBab){
            while(s.find(b) != std::string::npos){
                size_t idx = s.find(b);
                int len = b.length();
                s.replace(idx, len, ".");
            }
        }
        while(s.find(".") != std::string::npos){
            size_t idx = s.find(".");
            int len = 1;
            s.replace(idx, len, "");
        }
        if(s.length() == 0)
            answer++;
    }
    return answer;
}