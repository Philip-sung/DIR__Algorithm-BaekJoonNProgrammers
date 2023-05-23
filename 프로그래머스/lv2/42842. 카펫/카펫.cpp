#include <string>
#include <vector>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int width = 0;
    int height = 0;
    
    for(width = 0; width < brown / 2; width++) {
        height = ((brown + 4) - (2 * width)) / 2;
        if(yellow == ((width - 2) * (height - 2)) && width >= height){
            answer.push_back(width);
            answer.push_back(height);
        }
    }
    
    return answer;
}