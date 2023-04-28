#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) {
    int answer = 0;
    int size = board.size();
    vector<vector<int>> unsafe(board);
    unsafe.insert(unsafe.begin(), vector<int>(size + 2, 0));
    unsafe.insert(unsafe.end(), vector<int>(size + 2, 0));

    for (int i = 0; i < size; i++) {
        unsafe.at(i+1).insert(unsafe.at(i+1).begin(), 0);
        unsafe.at(i+1).insert(unsafe.at(i+1).end(), 0);
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (board.at(i).at(j) == 1) {
                unsafe.at(i + 1).at(j) = 2;
                unsafe.at(i + 1).at(j + 1) = 2;
                unsafe.at(i + 1).at(j + 2) = 2;
                unsafe.at(i).at(j) = 2;
                unsafe.at(i).at(j + 1) = 2;
                unsafe.at(i).at(j + 2) = 2;
                unsafe.at(i + 2).at(j) = 2;
                unsafe.at(i + 2).at(j + 1) = 2;
                unsafe.at(i + 2).at(j + 2) = 2;
            }
        }
    }

    unsafe.erase(unsafe.begin());
    unsafe.erase(unsafe.end() - 1);

    for (int i = 0; i < size; i++) {
        unsafe.at(i).erase(unsafe.at(i).begin());
        unsafe.at(i).erase(unsafe.at(i).end() - 1);
    }
    
    for (vector<int> v : unsafe){
        for (int i : v){
            if (i == 0)
                answer++;
        }
    }
    return answer;
}