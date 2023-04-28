#include <string>
#include <vector>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    int greater = a;
    int lesser = b;
    
    if (b > a){
        greater = b;
        lesser = a;
    }
    
    for (int i = lesser; i <= greater; i++)
        answer += i;
    if(lesser == greater)
        answer = lesser;
    
    return answer;
}