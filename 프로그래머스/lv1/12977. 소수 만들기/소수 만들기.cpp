#include <vector>
#include <iostream>
#include <set>
#include <cmath>

using namespace std;

int solution(vector<int> nums) {
    int answer = 0;

    for(int i = 0; i < nums.size(); i++){
        int num = nums.at(i);
        for(int j = i + 1; j < nums.size(); j++){
            for(int k = j + 1; k < nums.size(); k++){
                int sum = nums.at(i) + nums.at(j) + nums.at(k);
                bool isPrime = true;
                for (int l = 2; l <= sqrt(sum); l++){
                    if(sum % l == 0)
                        isPrime = false;
                }
                if (isPrime)
                    answer++;
            }
        }
    }

    return answer;
}