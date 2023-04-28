#include <string>
#include <vector>

using namespace std;

string solution(vector<int> food) {
    string answer = "0";
    string templ = "";
    string tempr = "";
    int idx = 0;
    
    for(int i : food){
        for(int j = 0; j < i / 2; j++){
            string dish = to_string(idx);
            templ = templ + dish;
            tempr = dish + tempr;
        }
        idx++;
    }
    
    answer = templ + answer + tempr;
    
    return answer;
}