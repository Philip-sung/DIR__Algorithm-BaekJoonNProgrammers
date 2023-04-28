#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int x = 0;
    int y = 0;
    
    for(vector<int> paper : sizes){
        int bigger = paper.at(0);
        int smaller = paper.at(1);
        if (paper.at(1) > paper.at(0)){
            bigger = paper.at(1);
            smaller = paper.at(0);
        }
        if(bigger > x){
            x = bigger;
        }
        if(smaller > y){
            y = smaller;
        }
        answer = x * y;
    }
    return answer;
}