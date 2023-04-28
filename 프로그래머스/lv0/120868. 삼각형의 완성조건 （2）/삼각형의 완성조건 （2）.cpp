#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int minlength = sides.at(0) > sides.at(1) ? sides.at(0) - sides.at(1) : sides.at(1) - sides.at(0);
    int maxlength = sides.at(0) + sides.at(1);
    
    answer = maxlength - minlength - 1;
    
    return answer;
}