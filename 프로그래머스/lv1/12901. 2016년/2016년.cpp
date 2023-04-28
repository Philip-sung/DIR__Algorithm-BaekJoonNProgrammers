#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<int> month = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    vector<string> week = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    int dayPassed = 0;
    
    for(int i = 0; i < a - 1; i++)
        dayPassed += month.at(i);
    dayPassed += b - 1;
    int wStart = 5;
    
    answer = week.at((wStart + dayPassed) % 7);
    
    return answer;
}