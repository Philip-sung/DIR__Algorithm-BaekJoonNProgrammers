#include <string>
#include <vector>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    vector<bool> skipChars(26, false);
    
    for(char c : skip){
        skipChars.at(c - 'a') = true;
    }
    
    for(char c : s){
        int skipped = 0;
        int counted = 1;
        int idx = 1;
        
        while(counted <= index){
            bool check = skipChars.at((c - 'a' + idx) % 26);
            if(check == true){
                skipped++;
            }
            else if (check == false){
                counted++;
            }
            idx++;
        }
        
        char moved = 'a' + ((c - 'a' + index + skipped) % 26);
        answer += moved;
    }
    
    return answer;
}