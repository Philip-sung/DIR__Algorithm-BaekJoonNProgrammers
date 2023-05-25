#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    
    for(int j = 0; j < arr1.size(); j++){
        vector<int> tmp(0);
        answer.push_back(tmp);
        for(int k = 0; k < arr2.at(0).size(); k++){
            int each = 0;
            for(int i = 0; i < arr1.at(0).size(); i++){
                each += arr1.at(j).at(i) * arr2.at(i).at(k);
            }
            answer.at(j).push_back(each);
        }
    }
    return answer;
}