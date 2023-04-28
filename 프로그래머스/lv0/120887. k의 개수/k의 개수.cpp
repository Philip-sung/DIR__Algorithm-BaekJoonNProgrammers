#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) {
    int answer = 0;
    int curNum = 0;
    for(i; i <= j; i++){
        curNum = i;
        while(curNum != 0){
            if(curNum % 10 == k)
                answer++;
            curNum = curNum / 10;
        }
    }
    return answer;
}