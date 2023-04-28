#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) {
    int answer = 0;
    int largeX = -512;
    int smallX = 512;
    int largeY = -512;
    int smallY = 512;
    
    for(vector<int> v : dots){
        if(v.at(0) > largeX)
            largeX = v.at(0);
        if(v.at(0) < smallX)
            smallX = v.at(0);
        if(v.at(1) > largeY)
            largeY = v.at(1);
        if(v.at(1) < smallY)\
            smallY = v.at(1);
    }
    
    answer = (largeX - smallX) * (largeY - smallY);
    
    return answer;
}