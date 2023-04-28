using namespace std;

long long solution(int price, int money, int count)
{
    long long llprice = price;
    long long llmoney = money;
    long long llcount = count;
    long long answer = -1;
    long long totPrice = 0;
    
    totPrice = llprice * (llcount * (llcount + 1) / 2);
    if(llmoney - totPrice >= 0)
        answer = 0;
    else if(money - totPrice < 0){
        answer = totPrice - llmoney;
    }
    

    return answer;
}