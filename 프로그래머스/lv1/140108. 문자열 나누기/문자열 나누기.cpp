#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    int first = 0;
    int rest = 0;
    string substr;
    
    vector<string> substrs;
    
    for(char c : s){
        if(first == rest && first != 0){
            substrs.push_back(substr);
            substr = "";
        }
        if(substr == ""){
            substr += c;
            first++;
        }
        else if(c == substr.at(0)){
            substr += c;
            first++;
        }
        else if(c != substr.at(0)){
            substr += c;
            rest++;
        }
    }
    substrs.push_back(substr);
    
    answer = substrs.size();
    
    return answer;
}