#include <string>
#include <vector>
#include <set>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    set<int> res;
    
    for(int i = 0; i < numbers.size(); i++){
        for(int j = i + 1; j < numbers.size(); j++)
            res.insert(numbers.at(i) + numbers.at(j));
    }
    
    for(int i : res){
        answer.push_back(i);
    }
    
    return answer;
}