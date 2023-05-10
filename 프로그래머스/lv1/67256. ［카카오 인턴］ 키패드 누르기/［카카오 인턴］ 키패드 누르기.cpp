#include <string>
#include <vector>
#include <cmath>

using namespace std;

string solution(vector<int> numbers, string hand) {
    string answer = "";
    vector<vector<int>> padcord
        = { {1,0}, {0,3}, {1,3}, {2,3}, {0,2}, {1,2}, {2,2}, {0,1}, {1,1}, {2,1}, {0,0}, {2,0} };
    vector<int> lHand = padcord.at(10);
    vector<int> rHand = padcord.at(11);
    
    for(int n : numbers){
        if(n == 1 || n == 4 || n == 7){
            answer += "L";
            lHand = padcord.at(n);
        }
        else if (n == 3 || n == 6 || n == 9){
            answer += "R";
            rHand = padcord.at(n);
        }
        else if (n == 2 || n == 5 || n == 8 || n == 0){
            int lDistance = abs(padcord.at(n).at(0) - lHand.at(0)) + abs(padcord.at(n).at(1) - lHand.at(1));
            int rDistance = abs(padcord.at(n).at(0) - rHand.at(0)) + abs(padcord.at(n).at(1) - rHand.at(1));
            if (lDistance < rDistance){
                answer += "L";
                lHand = padcord.at(n);
            }
            else if (rDistance < lDistance){
                answer += "R";
                rHand = padcord.at(n);
            }
            else if (lDistance == rDistance){
                if(hand == "right"){
                    answer += "R";
                    rHand = padcord.at(n);
                }
                else if(hand == "left"){
                    answer += "L";
                    lHand = padcord.at(n);
                }
            }
        }
    }
    
    return answer;
}