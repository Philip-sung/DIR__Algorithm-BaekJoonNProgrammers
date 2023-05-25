#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;
    int citationIdx = 0;
    int publishedIdx = 0;
    
    sort(citations.begin(), citations.end(), greater<int>());
    
    for(int citation : citations){
        citationIdx = citation;
        if(citationIdx <= publishedIdx){
            break;
        }
        publishedIdx++;
    }
    answer = publishedIdx;
    
    return answer;
}