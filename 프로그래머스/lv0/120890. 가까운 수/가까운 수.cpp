#include <string>
#include <vector>
#include <cstdlib>
#include <climits>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int minimum = INT_MAX;
    for (int i : array){
        if (abs(i - n) < minimum){
            answer = i;
            minimum = abs(i - n);
        }
        else if(abs(i - n) == minimum){
            if (answer > i)
                answer = i;
        }
    }
    return answer;
}