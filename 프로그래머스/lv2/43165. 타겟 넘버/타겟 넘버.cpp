#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    vector<vector<int>> cases;
    
    for(int i = 0; i < pow(2,numbers.size()); i++) {
        int deci = i;
        vector<int> temp(numbers.size(),0);
        for(int j = 0; j < numbers.size(); j++){
            temp.at(numbers.size() - 1 - j) = deci % 2;
            deci = deci / 2;
        }
        cases.push_back(temp);
    }
    
    for(vector<int> addcase : cases){
        int localAnswer = 0;
        for(int i = 0; i < numbers.size(); i++){
            if(addcase.at(i) == 0){
                localAnswer = localAnswer - numbers.at(i);
            }
            else if (addcase.at(i) == 1){
                localAnswer = localAnswer + numbers.at(i);
            }
        }
        if(localAnswer == target)
            answer++;
    }
    
    return answer;
}