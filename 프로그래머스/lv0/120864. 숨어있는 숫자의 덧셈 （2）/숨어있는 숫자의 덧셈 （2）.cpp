#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int continuous = 1;
    int localNum = 0;
    
    for(int i = 0; i < my_string.length(); i++){
        char curChar = my_string[i];
        if(curChar - '0' < 10 && curChar - '0' >= 0){
            localNum = continuous * localNum + (curChar - '0');
            continuous = 10;
        }
        else{
            continuous = 1;
            answer += localNum;
            localNum = 0;
        }
    }
    answer += localNum;
    
    return answer;
}