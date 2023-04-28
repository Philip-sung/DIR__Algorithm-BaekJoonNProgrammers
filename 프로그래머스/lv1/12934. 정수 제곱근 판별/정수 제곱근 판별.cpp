#include <string>
#include <vector>
#include <cmath>

using namespace std;

long long solution(long long n) {
    long long answer = -1;
    long long sqrtN = sqrt(n);
    
    for(long long i = 1; i <= sqrtN; i++){
        if (n == i * i){
            answer = (i + 1) * (i + 1);
        }
    }
    
    return answer;
}