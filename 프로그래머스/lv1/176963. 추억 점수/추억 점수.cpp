#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> name, vector<int> yearning, vector<vector<string>> photo) {
    vector<int> answer;
    
    for(vector<string> p : photo){
        int score = 0;
        for(string pn : p){
            for(int i = 0; i < name.size(); i++){
                if(pn == name.at(i)){
                    score += yearning.at(i);
                }
            }
        }
        answer.push_back(score);
    }
    
    return answer;
}