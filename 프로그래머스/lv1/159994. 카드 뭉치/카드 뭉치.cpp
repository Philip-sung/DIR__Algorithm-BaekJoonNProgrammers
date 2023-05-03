#include <string>
#include <vector>
#include <iostream>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "";
    int idx1 = 0;
    int idx2 = 0;
    bool escapeFlag = false;
    
    for(int i = 0; i < goal.size(); i++){
        string s = goal.at(i);
        if(idx1 < cards1.size() && s == cards1.at(idx1)){
            idx1++;
        }
        else if(idx2 < cards2.size() && s == cards2.at(idx2)){
            idx2++;
        }
        else{
            escapeFlag = true;
            break;
        }
    }
    
    if(!escapeFlag)
        answer = "Yes";
    else if(escapeFlag)
        answer = "No";
    
    return answer;
}