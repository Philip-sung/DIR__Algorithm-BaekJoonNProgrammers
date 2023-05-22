#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> bin;
    vector<int> answerBin;
    int idx = -1;
    int count = 0;
    
    //make n to bin
    while(n != 0){
        bin.insert(bin.begin(), n % 2);
        n = n / 2;
    }
    //count 1 in bin
    for(int i = 0; i < bin.size(); i++)
        if(bin.at(i) == 1)
            count++;
    //find index for bit calculation        
    for(int i = 0; i < bin.size() - 1; i++){
        if(bin.at(i) == 0 && bin.at(i + 1) == 1)
            idx = i;
    }
    //front part
    if(idx == -1){
        answerBin.push_back(1);
        answerBin.push_back(0);
        bin.insert(bin.begin(), 0);
    }
    else{
        bin.at(idx) = 1;
        for(int i = 0; i <= idx; i++){
            answerBin.push_back(bin.at(i));
        }
    }
    //rear part
    for(int i : answerBin){
        if (i == 1){
            count--;
        }
    }

    while(answerBin.size() < bin.size() - count)
        answerBin.push_back(0);
    while(answerBin.size() < bin.size())
        answerBin.push_back(1);
    //calculate sum
    int pow = 1;
    for(int i = answerBin.size() - 1; i >= 0 ; i--){
        answer += answerBin.at(i) * pow;
        pow = pow * 2;
    }
    
    return answer;
}