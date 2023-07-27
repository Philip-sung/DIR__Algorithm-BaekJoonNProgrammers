#include <string>
#include <vector>

using namespace std;

int Trans(char c, int i);

int solution(string word) {
    int answer = 0;
    while(word.length() < 5){
        word = word + "Z";
    }
    
    answer = Trans(word[4],1) + Trans(word[3],2) + + Trans(word[2],3) + Trans(word[1],4) + Trans(word[0],5);
    
    return answer;
}

int Trans(char c, int i){
    int result = 0;
    int multi = 0;
    switch (i){
        case 1:
            multi = 1;
            break;
        case 2:
            multi = 6;
            break;
        case 3:
            multi = 31;
            break;
        case 4:
            multi = 156;
            break;
        case 5:
            multi = 781;
            break;
    }
    switch (c){
        case 'A':
            result = 1;
            break;
        case 'E':
            result = 1 * multi + 1;
            break;
        case 'I':
            result = 2 * multi + 1;
            break;
        case 'O':
            result = 3 * multi + 1;
            break;
        case 'U':
            result = 4 * multi + 1;
            break;
        case 'Z':
            result = 0;
            break;
    }
    
    return result;
}