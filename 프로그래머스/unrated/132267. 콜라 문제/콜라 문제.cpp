#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int stack = 0;
    
    stack = n;
    
    while(stack >= a){
        stack -= a;
        stack += b;
        answer += b;
    }
    
    
    return answer;
}