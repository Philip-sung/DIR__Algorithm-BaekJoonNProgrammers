#include <string>
#include <vector>
#include <cstdlib>
#include <algorithm>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    vector<int> numbersX(10,0);
    vector<int> numbersY(10,0);
    
    for(char c : X){
        numbersX.at(int(c - '0'))++;
    }
    for (char c : Y){
        numbersY.at(int(c - '0'))++;
    }
    
    for(int i = 0; i < 10; i++){
        int num = min(numbersX.at(9-i),numbersY.at(9-i));
        if (num == 0)
            continue;
        else if (num > 0){
            for(int j = 0; j < num; j++){
                answer += to_string(9-i);
            }
        }
    }
    if(answer == "")
        answer = "-1";
    if(answer.at(0) == '0')
        answer = "0";
    
    return answer;
}