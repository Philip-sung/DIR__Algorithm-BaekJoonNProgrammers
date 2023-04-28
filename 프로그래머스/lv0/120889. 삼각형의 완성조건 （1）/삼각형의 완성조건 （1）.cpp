#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int maxNum = 0;
    float sum = 0;

    for (int i : sides){
        if(maxNum < i)
            maxNum = i;
        sum += i;
    }

    if (maxNum >= sum/2)
        answer = 2;
    else if (maxNum < sum/2)
        answer = 1;

    return answer;
}