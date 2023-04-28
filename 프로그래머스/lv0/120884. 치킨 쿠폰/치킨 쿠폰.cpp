#include <string>
#include <vector>

using namespace std;

int solution(int chicken) {
    int answer = -1;
    int coupon = chicken;
    int bonusChicken = 0;
    int sumBonusChicken = 0;
    
    while (coupon >= 10){
        bonusChicken = coupon / 10;
        coupon = coupon - (bonusChicken * 10) + bonusChicken;
        sumBonusChicken += bonusChicken;
    }
    
    answer = sumBonusChicken;
    return answer;
}