#include <string>
#include <vector>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    vector<bool> wall(n,true);
    
    for(int i : section){
        wall.at(i - 1) = false;
    }
    
    for(int i = 0; i < wall.size(); i++){
        if(wall.at(i) == false){
            for(int j = 0; j < m; j++){
                if(i + j >= wall.size())
                    break;
                wall.at(i + j) = true;
            }
            answer++;
        }
    }
    
    return answer;
}