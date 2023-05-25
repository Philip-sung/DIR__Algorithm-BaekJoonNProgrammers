#include <string>
#include <vector>

using namespace std;

bool CheckifRightBracketString(string s);

int solution(string s) {
    int answer = 0;
    
    for(int i = 0; i < s.length(); i++){
        bool result = CheckifRightBracketString(s);
        if(result)
            answer++;
        s = s.at(s.length() - 1) + s.substr(0,s.length() - 1);
    }
    
    
    return answer;
}

bool CheckifRightBracketString(string s){
    bool result = false;
    vector<char> stack;
    
    for(char c : s){
        if(stack.size() < 1){
            stack.push_back(c);
        }
        else if(stack.size() >= 1){
            if(stack.at(stack.size() - 1) == '{' && c == '}')
                stack.pop_back();
            else if(stack.at(stack.size() - 1) == '(' && c == ')')
                stack.pop_back();
            else if(stack.at(stack.size() - 1) == '[' && c == ']')
                stack.pop_back();
            else
                stack.push_back(c);
        }
    }
    if(stack.size() == 0)
        result = true;
    
    return result;    
}