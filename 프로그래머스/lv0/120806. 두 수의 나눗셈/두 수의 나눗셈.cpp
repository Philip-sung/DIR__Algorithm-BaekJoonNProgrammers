#include <string>
#include <vector>

using namespace std;

int solution(int num1, int num2) {
    int answer = 0;
    int remain = num1;
    for (int i = 0; i < 4; i++){
        answer = answer * 10 + remain / num2;
        remain = remain % num2 * 10;
        
    }
    return answer;
}