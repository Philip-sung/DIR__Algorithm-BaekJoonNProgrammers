#include <string>
#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    vector<int> index(26,-1);
    
    for(char c : s){
        int i = c - 'a';
        answer.push_back(index.at(i));
        for(int j=0; j < index.size(); j++){
            if(index.at(j) != -1){
                index.at(j)++;
            }
        }
        index.at(i) = 1;
    }
    
    return answer;
}