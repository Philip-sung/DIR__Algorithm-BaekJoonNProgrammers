#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array) {
    int answer = 0;
    vector<int> freq(1000,0);
    int mFreq = 0;
    int count = 0;
    
    for (int j : array){
        freq.at(j)++;
    }
    
    for (int i = 0; i < 1000; i++){
        if (freq.at(i) > mFreq){
            mFreq = freq.at(i);
        }
    }
    
    for (int i = 0; i < 1000; i++){
        if (freq.at(i) == mFreq){
            count++;
            answer = i;
        }
        
        if (count > 1)
            answer = -1;
    }
    
    return answer;
}