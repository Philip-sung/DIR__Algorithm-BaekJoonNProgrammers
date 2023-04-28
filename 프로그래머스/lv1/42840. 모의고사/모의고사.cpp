#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> sp1 = { 1,2,3,4,5 };
    vector<int> sp2 = { 2,1,2,3,2,4,2,5 };
    vector<int> sp3 = { 3,3,1,1,2,2,4,4,5,5 };
    vector<int> score(3,0);
    int max = 0;
    int maxIdx = 0;
    
    for(int i = 0; i < answers.size(); i++){
        if(sp1.at(i % sp1.size()) == answers.at(i))
            score.at(0)++;
        if(sp2.at(i % sp2.size()) == answers.at(i))
            score.at(1)++;
        if(sp3.at(i % sp3.size()) == answers.at(i))
            score.at(2)++;
    }
    
    for (int s : score){
        cout << "Score : " << s << endl;
    }
    
    for(int i = 0; i < score.size(); i++){
        if(max < score.at(i)){
            max = score.at(i);
            answer.clear();
            answer.push_back(i + 1);
        }
        else if(max == score.at(i)){
            answer.push_back(i + 1);
        }
    }
    
    sort(answer.begin(), answer.end(), less<int>());
    
    return answer;
}