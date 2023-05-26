#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, long long left, long long right) {
    vector<int> answer;
    
    for(long long i = left; i <= right; i++){
        int min = (i / n) + 1;
        int idx = (i % n) + 1;
        int num = min > idx ? min : idx;
        answer.push_back(num);
    }
    
    return answer;
}