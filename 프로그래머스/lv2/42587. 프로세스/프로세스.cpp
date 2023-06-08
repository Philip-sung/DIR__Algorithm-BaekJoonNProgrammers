#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <deque>
//#include <iostream>

using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    
    deque<int> priorityQueue(priorities.begin(), priorities.end());
    deque<int> priorityOrder(priorities.begin(), priorities.end());
    sort(priorityOrder.begin(), priorityOrder.end(), greater<int>());
    int idx = location;
    int count = 0;
    
    while(priorityQueue.size() > 0){
        //cout << "Index : " << idx << ", Count : " << count << endl;
        //for(int i = 0; i < priorityQueue.size(); i++){
        //    if (i != idx) cout << "□ ";
        //    else cout << "■ ";
        //}
        //cout << endl;
        //for(int i : priorityQueue) cout << i << " ";
        //cout << endl;
        //for(int i : priorityOrder) cout << i << " ";
        //cout << endl;
        int front = priorityQueue.at(0);
        
        if(front != priorityOrder.at(0)){
            priorityQueue.pop_front();
            priorityQueue.push_back(front);
        }
        else if (front == priorityOrder.at(0)){
            priorityQueue.pop_front();
            priorityOrder.pop_front();
            count++;
            if(idx == 0){
                answer = count;
                break;
            }
        }
        idx--;
        if(idx < 0)
            idx = priorityQueue.size() - 1;
        //cout << endl;
    }
    
    return answer;
}