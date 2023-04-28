#include <string>
#include <vector>

using namespace std;

bool solution(string s) {
    bool answer = false;
    
    if(s.length() == 4 || s.length() == 6){
        answer = true;
        for(char c : s){
            if(!isdigit(c))
                answer = false;
        }
    }
    
    return answer;
}