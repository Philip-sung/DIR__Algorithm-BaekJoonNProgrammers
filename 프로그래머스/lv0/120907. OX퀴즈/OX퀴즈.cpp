#include <string>
#include <vector>
#include <sstream>

using namespace std;
vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    string temp;

    for (string s : quiz) {
        int prevnum = 0;
        int num = 0;
        int sum = 0;
        bool sumflag = true;
        bool result = false;
        stringstream tempss(s);
        while (tempss >> temp) {
            if (temp == "+" || temp == "-" || temp == "=") {
                if (temp == "+")
                    sumflag = true;
                else if (temp == "-")
                    sumflag = false;
                else if (temp == "=")
                    result = true;
            }
            else {
                num = stoi(temp);
                if (sumflag && !result)
                    sum += num;
                if (!sumflag && !result)
                    sum -= num;
            }
        }
        if (sum == num)
            answer.push_back("O");
        else
            answer.push_back("X");
    }
    return answer;
}