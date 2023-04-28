#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> array) {
    vector<int> answer(2,0);
    int idx = 0;
    int max = 0;
    for (int i = 0; i < array.size(); i++){
        if (array.at(i) > max){
            max = array.at(i);
            idx = i;
        }
    }
    answer[0] = max;
    answer[1] = idx;
    
    return answer;
}