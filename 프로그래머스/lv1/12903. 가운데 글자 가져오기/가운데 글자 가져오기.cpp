#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    
    int slen = s.length();
    if(slen % 2 == 1){
        answer = s.substr(slen / 2, 1);
    }
    else if(slen % 2 == 0){
        answer = s.substr((slen - 1) / 2, 2);
    }
    
    return answer;
}