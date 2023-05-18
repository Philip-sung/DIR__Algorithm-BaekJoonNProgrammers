#include <string>
#include <vector>
#include <cctype>

using namespace std;

string solution(string s) {
    string answer = "";
    char former = ' ';
    
    for(char c : s){
        if(former == ' ' && isalpha(c))
            c = toupper(c);
        else if (former != ' ' && isalpha(c))
            c = tolower(c);
        
        answer += c;
        former = c;
    }
    
    return answer;
}