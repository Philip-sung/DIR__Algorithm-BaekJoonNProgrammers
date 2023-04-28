#include <string>
#include <vector>
#include <utility>
#include <algorithm>
#include <iostream>

using namespace std;

bool compare(const pair<int,float> p1, const pair<int,float> p2);

vector<int> solution(int N, vector<int> stages) {
    vector<int> answer;
    
    vector<int> stageClearUser(N + 2,0);
    vector<int> stageCurUser(N + 2,0);
    vector<pair<int,float>> stageFailureRates;
    
    for(int curUserStage : stages){
        for(int stage = 1; stage < curUserStage; stage++){
            stageClearUser.at(stage)++;
        }
        stageCurUser.at(curUserStage)++;
    }
    //int ii = 0;
    //for (int c : stageClearUser){
    //    cout << ii << " : " << c << endl;
    //    ii++;
    //}
    
    for(int stage = 1; stage <= N; stage++){
        float failureRate = 
            float(stageCurUser.at(stage)) / float(stageClearUser.at(stage) + stageCurUser.at(stage));
        stageFailureRates.push_back(make_pair(stage,failureRate));
    }
    
    //for (pair<int,float> p : stageFailureRates){
    //    cout << "Stage : " << p.first << ", FailureRate : " << p.second << endl;
    //}
    
    sort(stageFailureRates.begin(), stageFailureRates.end(), compare);
    
    for(pair<int,float> rate : stageFailureRates){
        answer.push_back(rate.first);
    }
    
    return answer;
}

bool compare(const pair<int,float> p1, const pair<int,float> p2){
    if (p1.second > p2.second)
        return true;
    else if (p2.second > p1.second)
        return false;
    else if (p1.second == p2.second){
        if(p1.first > p2.first)
            return false;
        else if (p2.first > p1.first)
            return true;
    }
}
