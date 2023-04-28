#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> triRev;
    while(n != 0){
        triRev.push_back(n % 3);
        n = n / 3;
    }
    
    int pow = 1;
    for(int i = 0; i < triRev.size(); i++){
        answer += triRev.at(triRev.size()-1-i) * pow;
        pow = pow * 3;
    }
    
    return answer;
}