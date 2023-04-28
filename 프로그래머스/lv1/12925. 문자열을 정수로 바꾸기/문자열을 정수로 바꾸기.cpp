#include <string>
#include <vector>
#include <cctype>

using namespace std;

int solution(string s) {
    int answer = 0;
    if(s.at(0) == '+'){
        s.erase(0,1);
        answer = stoi(s);
    }
    else if(s.at(0) == '-'){
        s.erase(0,1);
        answer = -stoi(s);
    }
    else{
        answer = stoi(s);
    }
    
    return answer;
}