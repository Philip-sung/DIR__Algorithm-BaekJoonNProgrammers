#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    int evenNum = 0;
    int oddNum = 0;
    for(int i : num_list){
        if ((i % 2) == 0)
            evenNum++;
        else if((i % 2) == 1)
            oddNum++;
    }
    
    answer.push_back(evenNum);
    answer.push_back(oddNum);
    
    return answer;
}