#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n, int k) {
    int answer = 0;
    vector<long long> nums;
    string transf = "";
    while(n > 0){
        string num = to_string(n % k);
        n = n / k;
        transf = num + transf;
    }
    
    string divnum= "";
    for(char c : transf){
        if(c != '0'){
            divnum += c;
        }
        else if (divnum != "" && c == '0'){
            nums.push_back(stoll(divnum));
            divnum = "";
        }
    }
    if(divnum != "")
        nums.push_back(stoll(divnum));
    
    for(long long i : nums){
        int count = 0;
        if (i == 1){
            continue;
        }
        for(long long j = 1; j <= sqrt(i); j++){
            if(i % j == 0){
                count++;
            }
        }
        if (count < 2)
            answer++;
    }    
    
    return answer;
}