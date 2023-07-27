#include <string>
#include <vector>

using namespace std;

int solution(string skill, vector<string> skill_trees) {
    int answer = 0;
    
    vector<bool> availableSkills(26, true);
    for(char c : skill){
        availableSkills.at(c - 'A') = false;
    }
    
    for(string s : skill_trees){
        bool isPossible = true;
        vector<bool> curAvailableSkills = availableSkills;
        int idx = 0;
        curAvailableSkills.at(skill.at(idx) - 'A') = true;
        
        for(char c : s){
            if(curAvailableSkills.at(c - 'A') == false){
                isPossible = false;
                break;
            }
            else if(curAvailableSkills.at(c - 'A') == true){
                if(c == skill.at(idx)){
                    if(idx < skill.length() - 1){
                        idx++;
                        curAvailableSkills.at(skill.at(idx) - 'A') = true;
                    }
                }
            }
        }
        if(isPossible){
            answer++;
        }
    }
    return answer;
}