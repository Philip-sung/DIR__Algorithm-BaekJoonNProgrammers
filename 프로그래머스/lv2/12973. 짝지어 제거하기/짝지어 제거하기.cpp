#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(string s)
{
    int answer = 0;
    
    vector<char> charStack;
    int idx = -1;
    for(char c : s){
        charStack.push_back(c);
        idx++;
        if(idx > 0){
            if(charStack.at(idx) == charStack.at(idx - 1)){
                charStack.pop_back();
                charStack.pop_back();
                idx = idx - 2;
            }
        }
    }
    
    if(charStack.size() == 0)
        answer = 1;
    else
        answer = 0;

    return answer;
}