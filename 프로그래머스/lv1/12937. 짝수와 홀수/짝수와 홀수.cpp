#include <string>
#include <vector>

using namespace std;

string solution(int num) {
    string answer = "";
    
    if(num % 2 == 1 || num % 2 == -1){
        answer = "Odd";
    }
    else if(num % 2 == 0){
        answer= "Even";
    }
    
    return answer;
}