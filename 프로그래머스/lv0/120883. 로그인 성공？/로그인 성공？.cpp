#include <string>
#include <vector>

using namespace std;

string solution(vector<string> id_pw, vector<vector<string>> db) {
    string answer = "";
    for(vector<string> v : db){
        if(v.at(0) == id_pw.at(0)){
            if(v.at(1) == id_pw.at(1))
                answer = "login";
            else
                answer = "wrong pw";
        }
        else
            answer = "fail";
        if (answer != "fail"){
            break;
        }
    }
    return answer;
}