#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
        
    vector<int> temp;
    int row, column;
    row = arr1.size();
    column = arr1[0].size();
    
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            int element = arr1[i][j] + arr2[i][j];
            temp.push_back(element);
        }
        answer.push_back(temp);
        temp.clear();
    }
    
    return answer;
}