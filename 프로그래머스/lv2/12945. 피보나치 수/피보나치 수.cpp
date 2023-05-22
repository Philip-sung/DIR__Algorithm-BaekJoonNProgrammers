#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    long long answer = 0;
    int m = n - 3;
    vector<long long> fib = {1, 1, 2};
    for(int i = 0; i < m; i++){
        fib.at(i % 3) = (fib.at((i + 1) % 3) % 1234567 + fib.at((i + 2) % 3) % 1234567) % 1234567;
    }
    
    answer = fib.at((n - 1) % 3);
    
    
    return answer;
}