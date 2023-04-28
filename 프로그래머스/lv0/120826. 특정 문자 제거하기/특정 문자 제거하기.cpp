#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) {
    string answer = "";
    int deleted = 0;
    
    for(int i = 0; i < my_string.length(); i++)
        if (my_string[i] == letter[0]){
            my_string.erase(i,1);   
            i--;
        }
    
    answer = my_string;
    
    return answer;
}