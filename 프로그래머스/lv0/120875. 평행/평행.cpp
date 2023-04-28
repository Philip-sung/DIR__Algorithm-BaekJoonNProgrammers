#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    vector<int> dotIdx = { 0, 1, 2, 3 };
    int d1 = 0;
    int d2 = 0;
    int d3 = 0;
    int d4 = 0;
    
    for(d2 = 1; d2 < 4; d2++){
        for(int extdot : dotIdx){
            if(extdot != d1 && extdot != d2){
                d3 = extdot;
                break;
            }
        }        
        for(int extdot : dotIdx){
            if(extdot != d1 && extdot != d2 && extdot != d3){
                d4 = extdot;
                break;
            }
        }
        
        float grad1 = (float)(dots.at(d1).at(0) - dots.at(d2).at(0))
            / (float)(dots.at(d1).at(1) - dots.at(d2).at(1));
        float grad2 = (float)(dots.at(d3).at(0) - dots.at(d4).at(0)) 
            / (float)(dots.at(d3).at(1) - dots.at(d4).at(1));
        
        if( grad1 == grad2 ){
            answer = 1;
        }
    }
    
    return answer;
}