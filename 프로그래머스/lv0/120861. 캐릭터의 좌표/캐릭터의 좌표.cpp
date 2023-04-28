#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer(2,0);
    int boardWidth = board.at(0) / 2;
    int boardHeight = board.at(1) / 2;
    
    for (string s : keyinput){
        if(s ==  "up")
            answer.at(1) = answer.at(1) + 1;
        else if(s ==  "down")
            answer.at(1) = answer.at(1) - 1;
        else if(s ==  "right")
            answer.at(0) = answer.at(0) + 1;
        else if(s ==  "left")
            answer.at(0) = answer.at(0) - 1;
        
        if (answer.at(0) > boardWidth)
            answer.at(0) = boardWidth;
        else if (answer.at(0) < -boardWidth)
            answer.at(0) = -boardWidth;
        
        if (answer.at(1) > boardHeight)
            answer.at(1) = boardHeight;
        else if (answer.at(1) < -boardHeight)
            answer.at(1) = -boardHeight;
    }
    return answer;
}