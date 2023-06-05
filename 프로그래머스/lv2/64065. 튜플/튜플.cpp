#include <string>
#include <vector>
#include <unordered_map>
#include <cctype>
#include <iostream>

using namespace std;

vector<int> solution(string s) {
    unordered_map<int,int> counts;
    bool counting = false;
    string num;
    
    for(char c : s) {
        if(isdigit(c)){
            counting = true;
        }
        else if (counting && (c == ',' || c == '}')){
            counting = false;
            counts[stoi(num)]++;
            num = "";
        }
        if(counting == true){
            num += c;
        }
    }
    
    vector<int> answer(counts.size(), 0);
    for(pair<int,int> p : counts){
        answer.at(counts.size() - p.second) = p.first;
    } 
    
    return answer;
}