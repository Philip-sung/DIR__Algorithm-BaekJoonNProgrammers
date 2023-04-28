#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) {
    int answer = -1;
    int count = 0;
    string Acopy = A;
    
    for(int i = 0; i < A.length(); i++){
        if(B == Acopy){
            answer = count;
            break;
        }
        Acopy = Acopy.at(Acopy.length()-1) + Acopy.substr(0,Acopy.length()-1);
        count++;
    }
    
    return answer;
}