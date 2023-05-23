#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    
    vector<int> weightVector(241,0);
    for(int i : people){
        weightVector.at(i)++;
    }
    for(int i = 240; i >= 40; i--){
        while(weightVector.at(i) > 0){
            weightVector.at(i)--;
            for(int j = i; j >= 40; j--){
                if(i + j <= limit && weightVector.at(j) > 0){
                    weightVector.at(j)--;
                    break;
                }
            }
            answer++;
        }
    }
    
    
    
    return answer;
}