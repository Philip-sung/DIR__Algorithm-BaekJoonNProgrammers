#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> d, int budget) {
    int answer = 0;
    int teams = 0;
    sort(d.begin(), d.end());
    while(budget - d.at(teams) >= 0){
        budget = budget - d.at(teams);
        teams++;
        if(teams >= d.size()){ break; }
    }
    
    answer = teams;
    
    return answer;
}