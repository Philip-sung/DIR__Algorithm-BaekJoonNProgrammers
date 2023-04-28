#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0;
    vector<string> word = {
        "zero", "one", "two", "three", "four", "five",
        "six", "seven", "eight", "nine"
    };
    int tmp;

    for (int i=0; i<word.size(); i++) {
        while ((tmp = numbers.find(word[i])) != string::npos) {
            numbers.replace(tmp, word[i].size(), to_string(i));
        }
    }
    answer = stoll(numbers);
    return answer;
}
