#include <string>
#include <vector>

using namespace std;

string solution(string letter) {
    vector<string> morse = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    string answer = "";
    string substr = "";
    for(char c : letter){
        if(c == '-' || c == '.')
            substr += c;
        else {
            for (int i = 0; i < 26; i++)
                if (morse[i] == substr)
                    answer += (char)(i + 97);
            substr = "";
        } 
    }
    for (int i = 0; i < 26; i++)
        if (morse[i] == substr)
            answer += (char)(i + 97);
        
    return answer;
}