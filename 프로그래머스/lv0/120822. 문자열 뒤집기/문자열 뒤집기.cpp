#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) {
    string answer = "";
    char temp = '\0';
    for (int i = 0; i < my_string.length() / 2; i++){
        temp = my_string[i];
        my_string[i] = my_string[my_string.length() - 1 - i];
        my_string[my_string.length() - 1 - i] = temp;
    }
    answer = my_string;
    return answer;
}