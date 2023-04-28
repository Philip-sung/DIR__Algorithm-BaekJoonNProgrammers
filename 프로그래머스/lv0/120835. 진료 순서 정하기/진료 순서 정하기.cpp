#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer(emergency.size(),0);
    int rank = emergency.size();
    for(int i = 1; i <=100; i++){
        for(int j = 0; j < emergency.size(); j++){
            if(i == emergency.at(j)){
                answer.at(j) = rank;
                rank--;
            }
        }
    }
    return answer;
}