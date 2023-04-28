#include <string>
#include <vector>

using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    vector<int> proceed(2, 0);
    int gcd = 1;
    int bigTmp = 1;
    int smallTmp = 1;

    proceed.at(0) = numer1 * denom2 + numer2 * denom1;
    proceed.at(1) = denom1 * denom2;

    if (proceed.at(0) > proceed.at(1)) {
        bigTmp = proceed.at(0);
        smallTmp = proceed.at(1);
    }
    else {
        bigTmp = proceed.at(1);
        smallTmp = proceed.at(0);
    }

    int former = bigTmp;
    int latter = smallTmp;
    while (former % latter != 0) {
        int temp = former;
        former = latter;
        latter = temp % latter;
    }

    gcd = latter;

    answer.push_back(proceed.at(0) / gcd);
    answer.push_back(proceed.at(1) / gcd);

    return answer;
}