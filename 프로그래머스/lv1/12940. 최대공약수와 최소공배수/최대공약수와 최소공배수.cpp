#include <string>
#include <vector>
#include <climits>

using namespace std;

vector<int> solution(int n, int m) {
    vector<int> answer;
    int bigger = m;
    int smaller = n;
    
    if (n > m){
        bigger = n;
        smaller = m;
    }
    
    for(int i = bigger; i >= 1; i--){
        if(bigger % i == 0 && smaller % i == 0){
            answer.push_back(i);
            break;
        }
    }
    
    for(int i = bigger; i < INT_MAX; i++){
        if(i % bigger == 0 && i % smaller == 0){
            answer.push_back(i);
            break;
        }
    }
    
    return answer;
}