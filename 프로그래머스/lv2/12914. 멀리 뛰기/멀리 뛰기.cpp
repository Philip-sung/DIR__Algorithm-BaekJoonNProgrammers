#include <string>
#include <vector>

using namespace std;

long long solution(int n) {
    long long answer = 0;
    
    vector<long long> fib = { 1, 2, 3 };
    
    for(int i = 0; i < n - 3; i++){
        fib.at(i % 3) = fib.at((i + 1) % 3) % 1234567 + fib.at((i + 2) % 3) % 1234567;
    }
    if(n > 3)
        answer = fib.at((n - 4) % 3) % 1234567;
    else
        answer = fib.at((n - 1) % 3);
    
    return answer;
}