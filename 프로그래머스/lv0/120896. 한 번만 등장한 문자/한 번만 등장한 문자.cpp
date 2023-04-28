#include <string>
#include <vector>
#include <set>

using namespace std;

string solution(string s) {
    string answer = "";
    multiset<char> charset;
    for (char c : s){
        charset.insert(c);
    }
    for(char c : charset){
        if(charset.count(c) == 1)
            answer.push_back(c);
    }
    return answer;
}