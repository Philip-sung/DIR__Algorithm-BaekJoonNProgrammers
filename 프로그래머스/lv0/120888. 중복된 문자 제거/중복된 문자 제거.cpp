#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<int> ascii(256,0);
    
    for (char c : my_string) {
        if (ascii[c] == 0){
            answer += c;
            ascii[c]++;
        }
        else if(ascii[c] != 0){}
    }
    
    return answer;
}