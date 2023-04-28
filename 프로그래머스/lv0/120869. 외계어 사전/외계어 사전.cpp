#include <string>
#include <vector>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    int answer = 2;
    bool exist = false;
    
    for (string s : dic){
        if(spell.size() == s.length()){
            exist = true;
            for (int i = 0; i < spell.size(); i++){
                size_t res = s.find(spell.at(i));
                if(res == string::npos)
                    exist = false;                    
            }
        }
        if (exist)
            answer = 1;
    }
    
    return answer;
}