#include <string>
#include <vector>

using namespace std;

int solution(string s) {
	int answer = 0;
	vector<string> substrArr = {};
	string substr = "";

	for (int i = 0; i < s.length(); i++) {
		if (s.at(i) != ' ') {
			substr += s.at(i);
		}
		else if (s.at(i) == ' ') {
			substrArr.push_back(substr);
			substr = "";
		}
	}
	substrArr.push_back(substr);

	for (int j = 0; j < substrArr.size(); j++) {
		if (substrArr.at(j) != "Z") {
			answer += stoi(substrArr.at(j));
		}
		else if (substrArr.at(j) == "Z") {
			answer -= stoi(substrArr.at(j - 1));
		}
	}
    
    return answer;
}