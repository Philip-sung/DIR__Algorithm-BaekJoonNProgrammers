#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    vector<int> numbers;
    string numString;
    int number;
    
    while(ss >> numString){
        numbers.push_back(stoi(numString));
    }
    
    sort(numbers.begin(), numbers.end());
    answer += to_string(numbers.at(0));
    answer += " ";
    answer += to_string(numbers.at(numbers.size() - 1));
    
    return answer;
}