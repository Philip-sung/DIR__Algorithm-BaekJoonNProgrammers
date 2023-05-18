#include <string>
#include <iostream>
#include <vector>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    vector<bool> bracketCheckStack;
    
    for(char c : s){
        if(c == '(')
            bracketCheckStack.push_back(true);
        else if (c == ')' && bracketCheckStack.size() > 0)
            bracketCheckStack.pop_back();
        else
            answer = false;
    }
    
    if(bracketCheckStack.size() != 0)
        answer = false;

    return answer;
}