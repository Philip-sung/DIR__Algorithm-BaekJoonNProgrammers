#include <string>
#include <vector>

using namespace std;

vector<long long> solution(int x, int n) {
    vector<long long> answer;
    long long element;
    for (int i = 1; i < n+1; i++){
        element = (long long)(x * i);
        answer.push_back(element);
    }
    return answer;
}