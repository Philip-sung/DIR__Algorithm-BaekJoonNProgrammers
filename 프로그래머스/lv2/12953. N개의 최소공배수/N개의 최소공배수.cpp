#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
    int answer = 0;
    bool unsolved = true;
    int maxElement = 0;
    
    for(int i : arr){
        if (maxElement < i)
            maxElement = i;
    }
    
    int multiply = 1;
    int lcm = 0;
    while(unsolved){
        lcm = maxElement * multiply;
        unsolved = false;
        for(int i : arr){
            if(lcm % i != 0){
                unsolved = true;
            }
        }
        multiply++;
    }
    
    answer = lcm;
    return answer;
}