#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
    int numlen = phone_number.size();
    for(int i =0; i < numlen-4; i++)
        phone_number[i] = '*';
    string answer = phone_number;
    return answer;
}