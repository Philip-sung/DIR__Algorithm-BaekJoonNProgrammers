#include <string>
#include <vector>

using namespace std;

double solution(vector<int> arr) {
    double answer = 0;
    int arrsize = arr.size();
    
    for(int i : arr)
        answer += i;
        
    answer /= arrsize;
    
    return answer;
}