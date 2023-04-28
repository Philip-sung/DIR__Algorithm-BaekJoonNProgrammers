#include <string>
#include <vector>

using namespace std;

bool solution(int x) {
    
    bool answer = true;
    int decrenum = x;
    int digitsum = 0;
    
    while (decrenum >= 1)
    {
        digitsum += decrenum % 10;
        decrenum = decrenum / 10;
    }
    
    if ((int)(x % digitsum) == 0)
        answer = true;
    else
        answer = false;
    
    return answer;
}