#include <string>
#include <vector>

using namespace std;

string solution(string bin1, string bin2) {
    string answer = "";
    int deci1 = stoi(bin1, 0, 2);
    int deci2 = stoi(bin2, 0, 2);
    int decisum = deci1 + deci2;
    
    if(decisum == 0)
        answer = "0";
    
    while(decisum != 0){
        char c = decisum % 2 + '0';
        answer = c + answer;
        decisum = decisum / 2;
    }
    
    return answer;
}