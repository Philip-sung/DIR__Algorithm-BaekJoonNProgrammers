#include <string>
#include <vector>
#include <iostream>

using namespace std;

int CheckStack(vector<int>& v);

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    
    vector<int> stack;
    
    for(int m : moves){
        int i = 0;
        while(board.at(i).at(m - 1) == 0){
            i++;
            if(i >= board.size() - 1)
                break;
        }
        if(board.at(i).at(m - 1) != 0)
            stack.push_back(board.at(i).at(m - 1));
        board.at(i).at(m - 1) = 0;
        
        answer += CheckStack(stack);
    }
    
    return answer;
}

int CheckStack(vector<int>& v){
    int pang = 0;
    if (v.size() >= 2){
        if (v.at(v.size() - 1) == v.at(v.size() - 2)){
            v.pop_back();
            v.pop_back();
            pang += 2;
        }
    }
    return pang;
}