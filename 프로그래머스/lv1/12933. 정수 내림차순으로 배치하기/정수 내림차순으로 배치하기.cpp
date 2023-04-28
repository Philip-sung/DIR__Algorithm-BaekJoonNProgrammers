#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<int> arr;
    
    while(n){
        arr.push_back(n % 10);
        n = n / 10;
    }
    sort(arr.begin(), arr.end(), greater<int>());
    
    for(int i : arr){
        answer = answer * 10 + i;
    }
    
    return answer;
}