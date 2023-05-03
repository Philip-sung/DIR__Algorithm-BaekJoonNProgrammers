#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    vector<int> correct;
    int undefNum = 0;
    
    for (int i : lottos)
        for(int j : win_nums)
            if (i == j)
                correct.push_back(i);
    
    for (int i : lottos)
        if (i == 0)
            undefNum++;
    
    int highest = 7 - correct.size() - undefNum;
    int lowest = 7 - correct.size();
    if(highest > 6) highest = 6;
    if(lowest > 6) lowest = 6;
    
    answer.push_back(highest);
    answer.push_back(lowest);
    
    
    return answer;
}