#include <string>
#include <vector>

using namespace std;

string solution(int age) {
    string answer = "";
    do {
        char c = (age % 10) + 97;
        answer = c + answer;
        age = age / 10;
    } while (age > 0);
    return answer;
}