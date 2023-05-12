#include <string>
#include <vector>

using namespace std;

int solution(vector<int> ingredient) {
    int answer = 0;
    vector<int> stack;
    int top = 0;
    
    for(int i : ingredient){
        stack.push_back(i);
        top++;
        if (top >= 4){
            if(
                stack.at(top - 1) == 1 &&
                stack.at(top - 2) == 3 &&
                stack.at(top - 3) == 2 &&
                stack.at(top - 4) == 1
              ){
                stack.pop_back();
                stack.pop_back();
                stack.pop_back();
                stack.pop_back();
                top = top - 4;
                answer++;
            }
        }
    }
    
    return answer;
}