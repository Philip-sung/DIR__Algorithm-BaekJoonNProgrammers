#include <string>
#include <vector>

using namespace std;

vector<int> solution(int num, int total) {
    vector<int> answer;
    
    if (num % 2 == 1){
        for (int i = 0 ; i < num; i++){
            answer.push_back(total / num - num / 2 + i);
        }
    }
    else {
        for(int i = 0; i < num; i++){
            answer.push_back(total / num - num / 2 + 1 + i);
        }
    }
    return answer;
}