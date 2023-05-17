#include <string>
#include <vector>
#include <sstream>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> answer;
    
    int width = park.at(0).length();
    int height = park.size();
    vector<int> curLoc(2,0);
    
    int h = 0;
    int w = 0;
    for(string s : park){
        w = 0;
        for(char c : s){
            if(c == 'S'){
                curLoc.at(0) = h;
                curLoc.at(1) = w;
            }
            w++;
        }
        h++;
    }
    
    for(string s : routes){
        char direction;
        int distance;
        vector<int> directionCoord(2,0);
        stringstream ss(s);
        ss >> direction;
        ss >> distance;
        
        if(direction == 'N'){
            directionCoord.at(0) = -1;
            directionCoord.at(1) = 0;
        }
        else if (direction == 'S'){
            directionCoord.at(0) = 1;
            directionCoord.at(1) = 0;
        }
        else if (direction == 'E'){
            directionCoord.at(0) = 0;
            directionCoord.at(1) = 1;
        }
        else if (direction == 'W'){
            directionCoord.at(0) = 0;
            directionCoord.at(1) = -1;
        }
        
        bool transition = true;
        vector<int> nextLoc = curLoc;
        for(int i = 0; i < distance; i++){
            nextLoc.at(0) = nextLoc.at(0) + directionCoord.at(0);
            nextLoc.at(1) = nextLoc.at(1) + directionCoord.at(1);
            if(nextLoc.at(0) < height && 
               nextLoc.at(0) >= 0 && 
               nextLoc.at(1) < width &&
               nextLoc.at(1) >= 0 &&
               park.at(nextLoc.at(0)).at(nextLoc.at(1)) != 'X'
              )
                ;
            else
                transition = false;
        }
        if(transition){
            curLoc = nextLoc;
        }
    }
    
    answer = curLoc;
    
    return answer;
}