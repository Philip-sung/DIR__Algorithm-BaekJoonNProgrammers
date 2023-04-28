#include <string>
#include <vector>
#include <set>

using namespace std;

int solution(string before, string after) {
    int answer = 0;
    multiset<char> orderedbefore;
    multiset<char> orderedafter;
    for(int i = 0; i < before.length(); i++){
        orderedbefore.insert(before[i]);
    }
    for(int i = 0; i < after.length(); i++){
        orderedafter.insert(after[i]);
    }
    if (orderedafter == orderedbefore)
        answer = 1;
    else
        answer = 0;
    
    return answer;
}