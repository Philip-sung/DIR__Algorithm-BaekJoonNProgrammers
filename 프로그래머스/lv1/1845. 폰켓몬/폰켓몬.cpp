#include <vector>
#include <set>
using namespace std;

int solution(vector<int> nums)
{
    int answer = 0;
    
    int quantity = nums.size();
    set species(nums.begin(),nums.end());
    if(species.size() > (nums.size() / 2)){
        answer = nums.size() / 2;
    }
    else
        answer = species.size();
    
    
    return answer;
}