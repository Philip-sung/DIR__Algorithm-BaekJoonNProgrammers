#include <vector>
#include <queue>

using namespace std;

int solution(vector<vector<int> > maps)
{
    int answer = 0;
    vector<int> temp;
    vector<int> curLoc = { 0, 0, 1 };
    maps.at(curLoc.at(1)).at(curLoc.at(0)) = 0;
    queue<vector<int>> availables;
    
    availables.push(curLoc);
    while(curLoc.at(0) != maps.at(0).size() - 1 || curLoc.at(1) != maps.size() - 1){
        if(availables.size() <= 0){
            answer = -1;
            break;
        }
        curLoc = availables.front();
        availables.pop();
        
        if(curLoc.at(1) + 1 < maps.size() && maps.at(curLoc.at(1) + 1).at(curLoc.at(0)) == 1){
            temp = {curLoc.at(0), curLoc.at(1) + 1, curLoc.at(2) + 1};
            availables.push(temp);
            maps.at(curLoc.at(1) + 1).at(curLoc.at(0)) = 0;
        }
        if(curLoc.at(1) - 1 >= 0 && maps.at(curLoc.at(1) - 1).at(curLoc.at(0)) == 1){
            temp = {curLoc.at(0), curLoc.at(1) - 1, curLoc.at(2) + 1};
            availables.push(temp);
            maps.at(curLoc.at(1) - 1).at(curLoc.at(0)) = 0;
        }
        if(curLoc.at(0) + 1 < maps.at(0).size() && maps.at(curLoc.at(1)).at(curLoc.at(0) + 1) == 1){
            temp = {curLoc.at(0) + 1, curLoc.at(1), curLoc.at(2) + 1};
            availables.push(temp);
            maps.at(curLoc.at(1)).at(curLoc.at(0) + 1) = 0;
        }
        if(curLoc.at(0) - 1 >= 0 && maps.at(curLoc.at(1)).at(curLoc.at(0) - 1) == 1){
            temp = {curLoc.at(0) - 1, curLoc.at(1), curLoc.at(2) + 1};
            availables.push(temp);
            maps.at(curLoc.at(1)).at(curLoc.at(0) - 1) = 0;
        }
    }
    
    if(curLoc.at(0) == maps.at(0).size() - 1 && curLoc.at(1) == maps.size() - 1){
        answer = curLoc.at(2);
    }
    
    return answer;
}