#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int answer = 0;
    int max = 0;
    int submax = 0;
    int count = 0;
    
    for (int i : numbers){
        if (max < i)
            max = i;
    }
    for (int j : numbers){
        if( j == max)
            count++;
        if (count > 1)
            submax = max;
        else if (j > submax && j != max)
            submax = j;
    }
    
    answer = max * submax;
    
    return answer;
}