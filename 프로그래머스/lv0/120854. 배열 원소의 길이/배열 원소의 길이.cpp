#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> strlist) {
    vector<int> answer;
    while(!strlist.empty()){
        answer.push_back(strlist[strlist.size()-1].length());
        strlist.pop_back();
    }
    reverse(answer.begin(), answer.end());
    return answer;
}