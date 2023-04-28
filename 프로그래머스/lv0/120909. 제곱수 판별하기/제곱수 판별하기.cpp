#include <string>
#include <vector>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 2;
    
    vector<int> squared;
    for (int i = 1; i <= 1000; i++)
        squared.push_back(i*i);
    
    for (auto i : squared)
        if (i == n)
            answer = 1;
    
    return answer;
}