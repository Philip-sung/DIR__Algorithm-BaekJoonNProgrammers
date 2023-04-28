#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    vector<int> answer;
    while(!num_list.empty()){
        answer.push_back(num_list[num_list.size()-1]);
        num_list.pop_back();
    }
    return answer;
}