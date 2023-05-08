#include <string>
#include <vector>
#include <unordered_set>
#include <iterator>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
    string answer = "";
    
    unordered_multiset<string> joined;  

    for (string c : completion){
        joined.insert(c);
    }
    unordered_multiset<string>::iterator iter;
    for (string p : participant){
        iter = joined.find(p);
        if(iter == joined.end())
            answer = p;
        else if(iter != joined.end())
            joined.erase(iter);
    }
    
    return answer;
}