#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    vector<int> charNum(26,0);
    int index = 0;
    
    for (char c : my_string){
        if (c < 91)
            c += 32;
        charNum[c - 97]++;
    }
    
    for (int a : charNum){
        for(int i = 0; i < a; i++)
            answer += (char)(index + 97);
        index++;
    }
    
    return answer;
}