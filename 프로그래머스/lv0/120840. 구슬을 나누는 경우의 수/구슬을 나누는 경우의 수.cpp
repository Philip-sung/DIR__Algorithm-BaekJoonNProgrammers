#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    unsigned long long answer = 1;
    unsigned long long total = 1;
    unsigned long long overlap = 1;
    for (int i = 0; i < share; i++){
        total *= balls - i;
        overlap *= i + 1;
        if (total % overlap == 0){
            total = total / overlap;
            overlap = 1;
        }
    }
    answer = total / overlap;
    return answer;
}