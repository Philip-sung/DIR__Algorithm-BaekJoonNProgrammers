#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    while (s.size() != 0) {
        int max = 0;
        int idx = 0;
        char maxChar = '\0';
        for (int i = 0; i < s.length(); i++) {
            if (int(s.at(i)) > int(maxChar)) {
                max = i;
                maxChar = s.at(i);
            }
        }
        answer += maxChar;
        s.erase(max, 1);
    }
    
    return answer;
}