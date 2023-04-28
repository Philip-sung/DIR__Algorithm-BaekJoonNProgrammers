#include <string>
#include <vector>

using namespace std;

int solution(string t, string p) {
    int answer = 0;
    
    string substr = "";
    int sublen = p.length();
    
    for(int i = 0; i + sublen <= t.length(); i++){
        substr = t.substr(i, sublen);
        if (stoll(p) >= stoll(substr)){
            answer++;
        }
    }
    
    return answer;
}