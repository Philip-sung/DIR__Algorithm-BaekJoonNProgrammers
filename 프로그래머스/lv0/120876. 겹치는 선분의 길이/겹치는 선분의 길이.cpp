#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) {
    int answer = 0;
    int startP = -100;
    int endP = 100;
    
    for(int i = startP; i <= endP; i++){
        int count = 0;
        if(i >= lines.at(0).at(0) && i < lines.at(0).at(1))
            count++;
        if(i >= lines.at(1).at(0) && i < lines.at(1).at(1))
            count++;
        if(i >= lines.at(2).at(0) && i < lines.at(2).at(1))
            count++;
        if(count >= 2)
            answer++;
    }
    

    return answer;
}