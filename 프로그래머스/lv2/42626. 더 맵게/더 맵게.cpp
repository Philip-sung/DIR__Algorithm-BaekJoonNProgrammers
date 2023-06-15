#include <string>
#include <vector>
#include <queue>
#include <functional>
#include <iostream>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    
    priority_queue<int, std::vector<int>, std::greater<int> > foods(scoville.begin(), scoville.end());
    while(foods.top() < K){
        if(foods.size() < 2){
            answer = -1;
            break;
        }
        int leastHot = foods.top();
        foods.pop();
        int lessHot = foods.top();
        foods.pop();
        foods.push(leastHot + (lessHot * 2));
        answer++;
    }
    
    return answer;
}