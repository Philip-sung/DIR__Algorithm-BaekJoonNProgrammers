#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int k) {
    int answer = 0;
    int order = 0;
    for (int i = 0; i < k; i++) {
        order = (2 * i) % numbers.size();
    }
    answer = numbers.at(order);

    return answer;
}