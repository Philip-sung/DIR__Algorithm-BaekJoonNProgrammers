#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int number, int limit, int power) {
    int answer = 0;
    
    for(int i = 1; i <= number; i++){
        int atk = 0;
        for(int j = 1; j < sqrt(i); j++){
            if( i % j == 0 ){
                atk += 2;
            }
        }
        if(float(i / sqrt(i)) == sqrt(i)){
            atk++; 
        }
       
        if(atk > limit){
            atk = power;
        }
        
        answer += atk;
    }
    
    return answer;
}