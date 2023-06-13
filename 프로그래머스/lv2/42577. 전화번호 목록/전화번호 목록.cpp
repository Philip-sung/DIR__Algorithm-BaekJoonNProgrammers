#include <string>
#include <vector>
#include <unordered_set>
#include <iostream>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    vector<unordered_set<string>> findMap(21);
    for(string s : phone_book){
        for(int i = 1; i < s.length(); i++){
            findMap.at(i).insert(s.substr(0,i));
        }
    }

    for(string str : phone_book){
        int strlen = str.length();
        if(findMap.at(strlen).find(str) != findMap.at(strlen).end()){
            answer = false;
        }

    }
    return answer;
}