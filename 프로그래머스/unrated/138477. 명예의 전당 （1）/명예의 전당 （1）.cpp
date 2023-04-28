#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

vector<int> solution(int k, vector<int> score) {
    vector<int> answer;
    vector<int> honors;
    
    for(int s : score){
        honors.push_back(s);
        sort(honors.begin(),honors.end(), greater<int>());
        if(honors.size() >= k){
            answer.push_back(honors.at(k - 1));
        }
        else
            answer.push_back(honors.at(honors.size()-1));
    }
    
    
    return answer;
}