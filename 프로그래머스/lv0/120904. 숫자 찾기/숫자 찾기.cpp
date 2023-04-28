#include <string>
#include <vector>

using namespace std;

int solution(int num, int k) {
    int answer = -1;
    vector<int> digits;

    while (num != 0) {
        digits.insert(digits.begin(), num % 10);
        num = num / 10;
    }

    for (int i = 0; i < digits.size(); i++) {
        if (digits.at(i) == k) {
            answer = i + 1;
            break;
        }
    }

    return answer;
}