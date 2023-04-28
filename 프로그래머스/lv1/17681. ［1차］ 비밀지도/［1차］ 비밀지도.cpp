#include <string>
#include <vector>
#include <deque>

using namespace std;

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    int mapSize = arr1.size();
    vector<string> answer(mapSize, "");
    
    for(int i = 0; i < mapSize; i++){
        deque<int> temp1;
        deque<int> temp2;
        int t1 = arr1.at(i);
        int t2 = arr2.at(i);
        
        for(int j = 0; j < mapSize; j++){
            temp1.push_front(t1 % 2);
            t1 = t1 / 2;
            temp2.push_front(t2 % 2);
            t2 = t2 / 2;
        }
        for(int j = 0; j < mapSize; j++){
            if(temp1.at(j) == 1 || temp2.at(j) == 1){
                answer.at(i) += "#";
            }
            else
                answer.at(i) += " ";
        }
    }
    
    
    return answer;
}