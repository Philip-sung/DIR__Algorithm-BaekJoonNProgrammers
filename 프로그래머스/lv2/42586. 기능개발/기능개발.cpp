#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int idx = 0;
    while(idx < progresses.size()){
        int count = 0;
        for(int i = 0; i < progresses.size(); i++){
            if(progresses.at(i) < 100)
                progresses.at(i) += speeds.at(i);
            else if(progresses.at(i) > 100)
                progresses.at(i) = 100;
        }
        
        while(idx < progresses.size() && progresses.at(idx) == 100){
            idx++;
            count++;
        }
        if(count != 0)
            answer.emplace_back(count);
    }
    return answer;
}