#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> students(n,1);
    
    for(int i : lost)
        students.at(i-1)--;

    for(int i : reserve)
        students.at(i-1)++;
    
    for(int i = 0; i < students.size(); i++){
        if(students.at(i) == 0){
            if(i > 0 && students.at(i - 1) == 2){
                students.at(i - 1)--;
                students.at(i)++;
            }
            else if(i + 1 < students.size() && students.at(i + 1) == 2){
                students.at(i + 1)--;
                students.at(i)++;
            }
        }
    }
    
    for(int i : students){
        if(i > 0)
            answer++;
    }
    
    
    return answer;
}