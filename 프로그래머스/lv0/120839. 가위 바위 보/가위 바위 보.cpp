#include <string>
#include <vector>

using namespace std;

string solution(string rsp) {
    string answer = "";
    for (int i = 0; i < rsp.length(); i++){
        if (rsp.at(i) == '2')
            answer.push_back('0');
        else if(rsp.at(i) == '0')
            answer.push_back('5');
        else if (rsp.at(i) == '5')
            answer.push_back('2');
    }
    return answer;
}