#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers, string direction) {
    vector<int> answer;
    if (direction == "right"){
        answer.push_back(numbers.at(numbers.size() - 1));
        for (int i = 0; i < numbers.size() - 1; i++)
            answer.push_back(numbers.at(i));
    }
    else if (direction == "left"){
        for (int i = 1; i < numbers.size(); i++)
            answer.push_back(numbers.at(i));
        answer.push_back(numbers.at(0));
    }
    return answer;
}
