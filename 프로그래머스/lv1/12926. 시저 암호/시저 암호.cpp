#include <string>
#include <vector>

using namespace std;

char pushchar(char c, int n);

string solution(string s, int n) {
    string answer = "";
    
    for(char c : s){
        answer += pushchar(c, n);
    }
    
    return answer;
}

char pushchar(char c, int n){
    int a = c;
    if(a == int(' ')){ }
    else {
        for(int i = 0; i < n; i++){
            a = a + 1;
            if(a > 'z' || (a > 'Z' && a <'a')){
                a = a - 26;
            }
        }
    }
    
    return char(a);
}