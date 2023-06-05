#include <string>
#include <vector>
#include <unordered_map>
#include <iostream>

using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    
    unordered_map<string, int> closet;
    for(vector<string> cloth : clothes){
        bool isExistCategory;
        if(closet.find(cloth.at(1)) == closet.end())
            isExistCategory = false;
        else
            isExistCategory = true;
        
        if(!isExistCategory)
            closet.emplace(cloth.at(1), 1);
        else if(isExistCategory)
            closet[cloth.at(1)]++;
    }
    
    for(pair<string, int> p : closet){
        answer *= p.second + 1;
    }
    answer--;
    
    return answer;
}