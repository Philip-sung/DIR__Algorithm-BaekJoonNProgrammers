#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int idx = 0;
    vector<string> numbers(1, "");
    vector<char> arith;

    for (char c : my_string) {
        if (isdigit(c)) {
            numbers.at(idx) += c;
        }
        if (c == '+' || c == '-') {
            arith.push_back(c);
            numbers.push_back("");
            idx++;
        }
    }

    answer = stoi(numbers.at(0));
    for (int i = 0; i < arith.size(); i++) {
        int temp = stoi(numbers.at(i + 1));
        if (arith.at(i) == '+') {
            answer += temp;
        }
        else if (arith.at(i) == '-') {
            answer -= temp;
        }
    }

    return answer;
 }