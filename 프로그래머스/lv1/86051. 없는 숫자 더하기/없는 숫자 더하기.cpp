#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    
    vector<int> count(10,0);
    for(int i : numbers){
        count.at(i)++;
    }
    for(int i = 0; i < count.size(); i++){
        if(count.at(i) == 0)
            answer += i;
    }
    
    return answer;
}