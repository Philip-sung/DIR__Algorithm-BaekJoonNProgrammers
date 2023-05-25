#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(vector<int> elements) {
    int answer = 0;
    set<int> subSumSet;
    int sum = 0;
    for(int i : elements){
        sum += i;
    }
    subSumSet.insert(sum);

    for(int subArrLength = 1; subArrLength <= elements.size() / 2; subArrLength++){
        for(int j = 0; j < elements.size(); j++){
            int subSum = 0;
            for(int k = 0; k < subArrLength; k++){
                subSum += elements.at((j + k) % elements.size());
            }
        subSumSet.insert(subSum);
        subSumSet.insert(sum - subSum);
        }
    }

    answer = subSumSet.size();

    return answer;
}