#include <iostream>
#include <string>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    int binLen = 0;
    string binA = "";
    string binB = "";
    a = a - 1;
    b = b - 1;
    
    while(n != 1){
        n = n / 2;
        binLen++;
    }
    
    while (a > 0){
        binA = to_string(a % 2) + binA;
        a = a / 2;
    }
    while(binA.length() < binLen){
        binA = "0" + binA;
    }
    
    while (b > 0){
        binB = to_string(b % 2) + binB;
        b = b / 2;
    }
    while(binB.length() < binLen){
        binB = "0" + binB;
    }
    
    while(binA != binB){
        binA.pop_back();
        binB.pop_back();
        answer++;
    }

    return answer;
}