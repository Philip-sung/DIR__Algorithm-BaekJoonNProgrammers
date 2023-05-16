#include <string>
#include <vector>
#include <climits>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    int xSize = wallpaper.at(0).length();
    int ySize = wallpaper.size();
    int top = INT_MAX;
    int bottom = INT_MIN;
    int left = INT_MAX;
    int right = INT_MIN;
    
    for(int i = 0; i < ySize; i++){
        string s = wallpaper.at(i);
        for(int j = 0; j < xSize; j++){
            if(s.at(j) == '#'){
                if(j < left)
                    left = j;
                if(j + 1 > right)
                    right = j + 1;
                if(i < top)
                    top = i;
                if(i + 1 > bottom )
                    bottom = i + 1;
            }
        }
    }
    
    answer.push_back(top);
    answer.push_back(left);
    answer.push_back(bottom);
    answer.push_back(right);
    
    return answer;
}