#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    
    //initialization
    answer.push_back(arr.at(0));
    int idx = 0;

    for(int i : arr){
        
        bool continued = false;
        if(i == answer.at(idx)){
            continued = true;
        }
        if(!continued){
            answer.push_back(i);
            idx++;
        }
    }

    return answer;
}