#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer(prices.size(), 0);
    vector<pair<int,int>> stack;
    for(int i = 0; i < prices.size(); i++){
        pair<int,int> temp(prices.at(i),i);
        for(pair<int,int> p : stack){
            answer.at(p.second)++;
        }
        while(stack.size() > 0 && stack.back().first > prices.at(i)){
            stack.pop_back();
        }
        stack.push_back(temp);
    }
    return answer;
}