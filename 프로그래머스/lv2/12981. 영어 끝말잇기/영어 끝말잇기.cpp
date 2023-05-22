#include <string>
#include <vector>
#include <iostream>
#include <unordered_set>

using namespace std;

vector<int> solution(int n, vector<string> words) {
    vector<int> answer;
    
    unordered_set<string> wordSet;
    int wordNum = 0;
    string before = "";
    for(string s : words){
        if (before != "" && s.at(0) != before.at(before.length() - 1)){
            answer.push_back((wordNum % n) + 1);
            answer.push_back((wordNum / n) + 1);
            break;
        }
        unordered_set<string>::iterator got = wordSet.find(s);
        if(got != wordSet.end()){
            answer.push_back((wordNum % n) + 1);
            answer.push_back((wordNum / n) + 1);
            break;
        }
        wordSet.insert(s);
        wordNum++;
        before = s;
    }
    
    if(answer.size() == 0){
        answer.push_back(0);
        answer.push_back(0);
    }

    return answer;
}