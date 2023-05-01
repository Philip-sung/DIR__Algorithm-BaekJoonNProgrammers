#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(string dartResult) {
    int answer = 0;
    vector<int> scores;
    string temp = "";
    int idx = 0;
    
    for(char c : dartResult){
        
        if(isdigit(c)){
            temp += c;
        }
        else {
            if(temp != ""){
                scores.push_back(stoi(temp));
                idx++;
                temp = "";
            }
            if(c == 'S'){
                scores.at(idx - 1);
            }
            else if (c == 'D'){
                scores.at(idx - 1) = pow(scores.at(idx - 1), 2);
            }
            else if (c == 'T'){
                scores.at(idx - 1) = pow(scores.at(idx - 1), 3);
            }
            else if (c == '*'){
                scores.at(idx - 1) = scores.at(idx - 1) * 2;
                if(idx >= 2){
                    scores.at(idx - 2) = scores.at(idx - 2) * 2;
                }
            }
            else if (c == '#'){
                scores.at(idx - 1) = -scores.at(idx - 1);
            }
        }
    }
    
    for(int i : scores){
        answer += i;
    }
    
    return answer;
}