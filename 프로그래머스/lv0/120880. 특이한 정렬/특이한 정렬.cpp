#include <string>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

vector<int> solution(vector<int> numlist, int n) {
    vector<int> answer;
    multimap<int, int> key;

    for (int i : numlist) {
        int distance = abs(i - n);
        key.insert({ distance, i });
    }

    for (std::pair<int, int> i : key) {
        answer.push_back(i.second);
    }


    for (int i = 0; i < answer.size() - 1; i++) {
        if (abs(answer.at(i) - n) == abs(answer.at(i + 1) - n)) {
            int bigger = answer.at(i + 1) - answer.at(i) > 0 ? answer.at(i + 1) : answer.at(i);
            int smaller = answer.at(i + 1) - answer.at(i) > 0 ? answer.at(i) : answer.at(i + 1);
            answer.at(i + 1) = smaller;
            answer.at(i) = bigger;
        }
    }

    return answer;
}