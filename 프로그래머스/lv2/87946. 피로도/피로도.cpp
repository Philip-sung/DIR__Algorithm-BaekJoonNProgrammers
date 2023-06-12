#include <string>
#include <vector>
//#include <iostream>

using namespace std;

int solution(int k, vector<vector<int>> dungeons) {
    int counter = 0;
    int max_answer = 0;
    
    for(int i = 0; i < dungeons.size(); i++){
        if(k >= dungeons.at(i).at(0)){
            counter++;
        }
    }
    //cout << "*current rests : " << counter << ", current hp : " << k << endl;
    if(counter == 0){
        return 0;
    }
    
    for(int i = 0; i < dungeons.size(); i++){
        //cout << "for " << i << "th elements\n";
        vector<vector<int>> rest = dungeons;
        int hp = k;
        int answer = 1;
        if(hp >= rest.at(i).at(0)){
            hp = hp - rest.at(i).at(1);
            rest.erase(rest.begin() + i);
            //cout << "recursive function call\n";
            answer += solution(hp, rest);
            if(answer >= max_answer)
                max_answer = answer;
        //cout << "hp : " << hp << ", answer : " << answer << endl;
        }
        //cout << "hp : " << hp << ", max_answer : " << answer << endl << endl;
    }
    
    return max_answer;
}