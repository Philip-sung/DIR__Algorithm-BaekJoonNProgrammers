#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    bool insertFlag = true;

    while (n != 1) {
        for (int i = 2; i <= n; i++) {
            if (n % i == 0) {
                n = n / i;
                //Check if divisor exist in vector
                for (int j : answer) {
                    if (j == i) {
                        insertFlag = false;
                    }
                }
                //insert if divisor unique
                if (insertFlag) {
                    answer.push_back(i);
                }
                //initialize precedure
                i = 1;
                insertFlag = true;
            }
        }
    }
    return answer;
}