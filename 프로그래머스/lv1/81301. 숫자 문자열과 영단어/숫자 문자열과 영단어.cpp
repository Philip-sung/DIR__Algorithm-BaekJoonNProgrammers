#include <string>
#include <vector>

using namespace std;

bool isdigit(string s);

const vector<string> numeric = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
const vector<string> numbers = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };

int solution(string s) {
    int answer = 0;
    string temp = "";
    string answerString = "";
    
    while(s.length() > 0){
        temp += s.at(0);
        s.erase(0,1);
        for (int i = 0; i < numeric.size(); i++){
            if (temp == numeric.at(i)){
                temp = numbers.at(i);
            }
        }
        
        if(isdigit(temp)){
            answerString += temp;
            temp = "";
        }
    }
    answer = stoi(answerString);
    
    return answer;
}


bool isdigit(string s){
    bool result = false;
    
    for(string n : numbers){
        if (s == n)
            result = true;
    }
    
    return result;
}