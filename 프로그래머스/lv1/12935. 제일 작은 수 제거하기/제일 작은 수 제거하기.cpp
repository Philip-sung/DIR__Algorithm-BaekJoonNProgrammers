#include <string>
#include <vector>
#include <climits>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    int minNum = INT_MAX;
    int minIdx = 0;
    int idx = 0;
    
    for(int i : arr){
        if(i < minNum){
            minNum = i;
            minIdx = idx;
        }
        idx++;
    }
    arr.erase(arr.begin() + minIdx);
    
    if(arr.size() != 0){
        answer = arr;
    }
    else if(arr.size() == 0){
        answer.push_back(-1);
    }
    
    return answer;
}