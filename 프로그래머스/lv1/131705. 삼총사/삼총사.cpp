#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> number) {
    int answer = 0;
    int count = 0;
    
    for(int i = 0; i < number.size(); i++){
        vector<int> temp = number;
        int num1 = temp.at(i);
        temp.erase(temp.begin() + i);
        for(int j = 0; j < temp.size(); j++){
            vector<int> temp2 = temp;
            int num2 = temp2.at(j);
            temp2.erase(temp2.begin() + j);
            for(int k = 0; k < temp2.size(); k++){
                vector<int> temp3 = temp2;
                int num3 = temp3.at(k);
                temp3.erase(temp3.begin() + k);
                cout << "REST : ";
                for(int n : temp3){
                    cout << n << " | ";
                }
                cout << endl << num1 << " + " << num2 << " + " << num3 << endl;
                if(num1 + num2 + num3 == 0)
                    count++;
            }
        }
    }
    
    answer = count / 6;
    
    return answer;
}