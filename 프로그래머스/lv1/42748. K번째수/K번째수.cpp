#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    
    for(vector<int> command : commands){
        vector<int> temp;
        for(int i = 0; i < command.at(1) - command.at(0) + 1; i++){
            int t = array.at(command.at(0) - 1 + i);
            temp.push_back(t);
        }
        sort(temp.begin(),temp.end(),less<int>());
        answer.push_back(temp.at(command.at(2) - 1));
    }
    
    return answer;
}