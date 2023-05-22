#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    
    for(int i = 0; (i * (i + 1) / 2) < n; i++){
        if ((n - (i * (i + 1) / 2)) % (i + 1) == 0) {
            answer++;
            for(int j = 0; j <= i; j++){
            }
        }
    }
    
    return answer;
}