#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";
    for(int i = 0; i < my_string.length(); i++)
        if(my_string.at(i) == 'a' ||
          my_string.at(i) == 'e' ||
          my_string.at(i) == 'i' ||
          my_string.at(i) == 'o' ||
          my_string.at(i) == 'u'){
            my_string.erase(my_string.begin() + i);
            i--;
            }
    answer = my_string;
    return answer;
}