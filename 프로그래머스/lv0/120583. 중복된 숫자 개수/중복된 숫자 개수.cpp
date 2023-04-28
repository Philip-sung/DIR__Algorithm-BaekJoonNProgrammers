#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int size = array.size();
    for(int i = 0; i < size; i++)
        if (array[i] == n)
            answer++;
    
    cout << "Hello\n";
    cout << "This is ME";
    
    return answer;
}