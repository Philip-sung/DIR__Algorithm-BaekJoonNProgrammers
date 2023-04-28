#include <string>
#include <vector>
#include <climits>

using namespace std;

//Minimize Time complexity, with O(4N)
int solution(vector<int> numbers) {
    int answer = 0;
    vector<int> pos;
    vector<int> neg;
    vector<int> tempArr;

    tempArr = numbers;
    for (int count = 0; count < 2; count++){
        int max = INT_MIN;
        int maxIdx = 0;
        for(int i = 0; i < tempArr.size(); i++){
            if (tempArr.at(i) > max) {
                max = tempArr.at(i);
                maxIdx = i;
            }
        }
        pos.push_back(max);
        tempArr.erase(tempArr.begin() + maxIdx);       
    }

    tempArr = numbers;
    for (int count = 0; count < 2; count++){
        int min = INT_MAX;
        int minIdx = 0;
        for(int i = 0; i < tempArr.size(); i++){
            if (tempArr.at(i) < min){
                min = tempArr.at(i);
                minIdx = i;
            }
        }
        neg.push_back(min);
        tempArr.erase(tempArr.begin() + minIdx);        
    }

    answer = (pos[0] * pos[1] > neg[0] * neg[1]) ? pos[0] * pos[1] : neg[0] * neg[1];

    return answer;
}
