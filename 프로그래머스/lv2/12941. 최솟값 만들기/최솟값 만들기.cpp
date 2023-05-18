#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int solution(vector<int> A, vector<int> B)
{
    int answer = 0;

    sort(A.begin(), A.end(), greater<int>());
    sort(B.begin(), B.end(), less<int>());
    
    for(int i = 0; i < A.size(); i++){
        answer += A.at(i) * B.at(i);
    }
    
    return answer;
}