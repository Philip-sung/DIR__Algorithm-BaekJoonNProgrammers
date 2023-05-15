#include <string>
#include <vector>
#include <cctype>
#include <iostream>

using namespace std;

string solution(string new_id) {
    string answer = "";
    char formerChar = '\0';
    for(int i = 0; i < new_id.size(); i++){
        char c = new_id.at(i);
        if(isalpha(c)){
           c = tolower(c);
        }
        if (!(isalpha(c) || isdigit(c) || c == '-' || c == '.' || c == '_'))
            continue;
        if (formerChar == '.' && c == '.')
            continue;
        answer += c;
        formerChar = c;
    }
    cout << "1: "<< answer << endl;
    if(answer.size() > 0 && answer.at(0) == '.')
        answer.erase(0,1);
    cout << "2: "<< answer << endl;
    if(answer.size() > 0 && answer.at(answer.size() - 1) == '.')
        answer.erase(answer.size() - 1,1);
    cout << "3: "<< answer << endl;
    if(answer == ""){
        answer = "a";
    }
    cout << "4: "<< answer << endl;
    if (answer.size() > 15){
        answer = answer.substr(0,15);
    }
    cout << "5: "<< answer << endl;
    if(answer.at(0) == '.' && answer.size() > 0)
        answer.erase(0,1);
    cout << "6: "<< answer << endl;
    if(answer.at(answer.size() - 1) == '.' && answer.size() > 0)
        answer.erase(answer.size() - 1,1);
    cout << "7: "<< answer << endl;
    if(answer.size() < 3){
        char c = answer.at(answer.size() - 1);
        while(answer.size() < 3)
            answer += c;
    }
    cout << "8: "<< answer << endl;
    
    
    return answer;
}