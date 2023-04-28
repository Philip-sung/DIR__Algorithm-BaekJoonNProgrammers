#include <string>
#include <vector>

#define ARITH 1
#define GEOME 2

using namespace std;

int solution(vector<int> common) {
    int answer = 0;
    int flag = 0;
    int arith = 0;
    int geo = 1;
    
    if(common.at(1) - common.at(0) == common.at(2) - common.at(1)){
        flag = ARITH;
        arith = common.at(1) - common.at(0);
        answer = common.at(common.size() - 1) + arith;
    }
    else{
        flag = GEOME;
        geo = common.at(1) / common.at(0);
        answer = common.at(common.size() - 1) * geo;
    }
    
    
    
    return answer;
}