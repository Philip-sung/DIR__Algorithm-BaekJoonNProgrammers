#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(string s) {
    string answer = "";
    int idx = -1;
    for(char c : s){
        if(c != ' ')
            idx++;
        else if(c == ' ')
            idx = -1;
        
        if(idx % 2 == 0){
            c = toupper(c);
            answer += c;
        }
        else{
            c = tolower(c);
            answer += c;
        }
    }
    
    return answer;
}