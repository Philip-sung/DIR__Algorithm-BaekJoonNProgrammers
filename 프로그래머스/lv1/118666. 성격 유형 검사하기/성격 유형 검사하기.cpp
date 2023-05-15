#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(vector<string> survey, vector<int> choices) {
    string answer = "";
    
    map<string, int> result;
    result["RT"] = 0;
    result["CF"] = 0;
    result["JM"] = 0;
    result["AN"] = 0;
    
    for(int i = 0; i < survey.size(); i++){
        int score = choices.at(i) - 4;
        string surveyParameter = survey.at(i);
        
        if(surveyParameter == "TR" || 
           surveyParameter == "FC" ||
           surveyParameter == "MJ" ||
           surveyParameter == "NA"
          ){
            score = -score;
            surveyParameter = survey.at(i).substr(1,1) + survey.at(i).substr(0,1);
        }
        
        result[surveyParameter] += score;
    }
    
    
    if(result["RT"] > 0) { answer += 'T'; } else { answer += "R"; }
    if(result["CF"] > 0) { answer += 'F'; } else { answer += "C"; }
    if(result["JM"] > 0) { answer += 'M'; } else { answer += "J"; }
    if(result["AN"] > 0) { answer += 'N'; } else { answer += "A"; }
    
    return answer;
}