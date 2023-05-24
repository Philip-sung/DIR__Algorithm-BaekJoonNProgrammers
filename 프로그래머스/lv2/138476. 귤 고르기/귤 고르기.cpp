#include <string>
#include <vector>
#include <unordered_map>
#include <set>
#include <iostream>

using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    unordered_map<int,int> size_count;
    vector<set<int>> count_size(1);    

    for(int size : tangerine){
        if(size_count.find(size) == size_count.end()){
            size_count.insert(pair<int,int>(size,1));
        }
        else {
            size_count.at(size)++;
        }

        int curCount = size_count.at(size);
        if(count_size.size() - 1 < curCount){
            count_size.push_back(set<int>());
        }
        count_size.at(curCount).insert(size);
        if(curCount > 1){
            count_size.at(curCount - 1).erase(size);
        }
    }

    for(int i = 0; i < count_size.size(); i++){
        int curSizeBoxes = count_size.at(count_size.size() - 1 - i).size();
        for(int j = 0; j < curSizeBoxes; j++){
            answer++;
            k = k - (count_size.size() - 1 - i);
            if(k <= 0)
                break;
        }
        if(k <= 0)
            break;
    }

    return answer;
}