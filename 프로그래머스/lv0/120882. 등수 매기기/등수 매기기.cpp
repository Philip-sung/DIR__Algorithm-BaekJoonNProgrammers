#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<vector<int>> score) {
    vector<int> answer;
    vector<int> avg;
    multiset<int,greater<int>> avg_ordered;
    
    for(vector<int> v : score){
        int tmpSum = v.at(0) + v.at(1);
        avg.push_back(tmpSum);
    }
    
    for(int i : avg){
        avg_ordered.insert(i);
    }
    
    for(int i : avg){
        int rank = 1;
        for(int j : avg_ordered){
            if (i == j){
                answer.push_back(rank);
                break;
            }
            else
                rank++;
        }
    }
    
    return answer;
}