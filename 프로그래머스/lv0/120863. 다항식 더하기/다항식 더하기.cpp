#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    stringstream ss(polynomial);
    string temp;
    vector<int> coefficient(2,0);
    
    while(ss >> temp){
        if(temp.at(temp.length() - 1) == 'x'){
            if(temp.at(0) == 'x'){
                coefficient.at(0)++;
            }
            else
                coefficient.at(0) += stoi(temp.substr(0,temp.length()));
        }
        else if (temp.at(0) == '+'){}
        else {
            coefficient.at(1) += stoi(temp);
        }
    }
    
    if ( coefficient.at(0) == 0 && coefficient.at(1) == 0){
        answer = to_string(0);
    }
    else if ( coefficient.at(0) == 0 && coefficient.at(1) != 0){
        answer = to_string(coefficient.at(1));
    }
    else if ( coefficient.at(0) != 0 && coefficient.at(1) == 0 ){
        if (coefficient.at(0) == 1)
            answer = "x";
        else
            answer = to_string(coefficient.at(0)) + "x";
    }
    else {
        if (coefficient.at(0) == 1)
            answer = "x + " +  to_string(coefficient.at(1));
        else
            answer = to_string(coefficient.at(0)) + "x + " +  to_string(coefficient.at(1));
    }
    
    return answer;
}