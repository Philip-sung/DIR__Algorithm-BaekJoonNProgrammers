#include <string>
#include <unordered_set>

using namespace std;

pair<int,int> MoveCoordinate(pair<int,int>, char c);

int solution(string dirs) {
    int answer = 0;
    unordered_set<string> moveLog;
    pair<int,int> curLocation(0,0);
    
    for(char c : dirs){
        pair<int,int> newLocation = MoveCoordinate(curLocation, c);
        if(newLocation == curLocation)
            continue;
        
        string moveLogStr = 
            to_string(curLocation.first) +
            to_string(curLocation.second) +
            to_string(newLocation.first) +
            to_string(newLocation.second);
        string moveLogStrRev = 
            to_string(newLocation.first) +
            to_string(newLocation.second) +
            to_string(curLocation.first) +
            to_string(curLocation.second);
        if(moveLog.find(moveLogStr) == moveLog.end()){
            moveLog.insert(moveLogStr);
            moveLog.insert(moveLogStrRev);
            answer++;
        }
        
       curLocation = newLocation;
    }
    
    return answer;
}

pair<int,int> MoveCoordinate(pair<int,int> curLoc, char cmd){
    int MAX = 5;
    int MIN = -5;
    pair<int,int> newLoc;
    
    if(cmd == 'U')
        newLoc = make_pair(curLoc.first, curLoc.second + 1);
    else if (cmd == 'D')
        newLoc = make_pair(curLoc.first, curLoc.second - 1);
    else if (cmd == 'L')
        newLoc = make_pair(curLoc.first - 1, curLoc.second);
    else if (cmd == 'R')
        newLoc = make_pair(curLoc.first + 1, curLoc.second);
    
    if(newLoc.first > MAX)
        newLoc.first = MAX;
    else if (newLoc.first < MIN)
        newLoc.first = MIN;
    
    if(newLoc.second > MAX)
        newLoc.second = MAX;
    else if (newLoc.second < MIN)
        newLoc.second = MIN;
    
    return newLoc;
}