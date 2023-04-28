#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    vector<vector<string>> divconq(26);
    
    int i = 0;
    for(char c = 'a'; c <= 'z'; c++){
        for(string s : strings){
            if(s.at(n) == c){
                divconq.at(i).push_back(s);
            }
        }
        i++;
    }
    
    for(vector<string> v : divconq){
        sort(v.begin(),v.end(),less<string>());
        for(string s : v){
            answer.push_back(s);
        }
    }
    
    return answer;
}