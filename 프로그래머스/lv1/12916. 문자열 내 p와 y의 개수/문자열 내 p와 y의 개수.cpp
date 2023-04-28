#include <string>
#include <iostream>
#include <sstream>

using namespace std;

bool solution(string s)
{
    bool answer = true;
    int pnum = 0;
    int ynum = 0;

    for(char c : s){
        if (c == 'p' || c == 'P'){
            pnum++;
        }
        else if (c == 'y' || c == 'Y'){
            ynum++;
        }
    }
    if(pnum != ynum){
        answer = false;
    }
    else if (pnum == ynum){
        answer = true;
    }
    
    return answer;
}