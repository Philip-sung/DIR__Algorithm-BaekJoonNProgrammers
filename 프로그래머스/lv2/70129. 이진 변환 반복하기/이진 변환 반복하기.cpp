#include <string>
#include <vector>

using namespace std;

vector<int> BinTrans(string s);

vector<int> solution(string s) {
    vector<int> answer;
    string ones = "";
    
    answer = BinTrans(s);
    
    return answer;
}

vector<int> BinTrans(string s){
    string ones;
    string result;
    int zeros = 0;
    int newNum = 0;
    vector<int> ret(2,0);
    
    if(s == "1"){
        vector<int> ret(2,0);
        return ret;
    }
    
    for(char c : s){
        if(c == '0')
            zeros++;
        else if (c == '1')
            ones += c;
    }
    newNum = ones.length();
    while(newNum != 0){
        result = to_string(newNum % 2) + result;
        newNum = newNum / 2;
    }
    vector<int> recursive = BinTrans(result);
    
    ret.at(0) = recursive.at(0) + 1;
    ret.at(1) = zeros + recursive.at(1);

    return ret;
}