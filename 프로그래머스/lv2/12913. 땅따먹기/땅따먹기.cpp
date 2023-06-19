#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<vector<int> > land)
{
    int answer = 0;
    vector<int> sumRow = land.at(0);
    for(int i = 1; i < land.size(); i++){
        vector<int> dupli = sumRow;
        for(int j = 0; j < 4; j++){
            vector<int> temp = dupli;
            temp.at(j) = 0;
            int max =*max_element(temp.begin(), temp.end());
            sumRow.at(j) = land.at(i).at(j) + max;
        }
    }

    answer = *max_element(sumRow.begin(), sumRow.end());
    
    return answer;
}