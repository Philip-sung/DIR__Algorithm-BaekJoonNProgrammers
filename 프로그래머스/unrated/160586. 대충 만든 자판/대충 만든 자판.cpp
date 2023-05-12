#include <string>
#include <vector>
#include <utility>
#include <iostream>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    vector<pair<int,int>> fastest(26);
    int maxKeyLength = 0;
    
    for(string s : keymap){
        if(s.length() > maxKeyLength)
            maxKeyLength = s.length();
    }
    
    for(int i = 0; i < 26; i++){
        int key = -1;
        int keytab = -1;
        for(int j = 1; j <= maxKeyLength; j++){
            for(int k = 0; k < keymap.size(); k++){
                if(j > keymap.at(k).size())
                    continue;
                else if(int(keymap.at(k).at(j - 1) - 'A') == i){
                    key = k;
                    keytab = j;
                    break;
                }
            }
            if(keytab != -1)
                break;
        }
        
        pair<int,int> input = make_pair(key,keytab);
        fastest.at(i) = input;
    }
    
    for(string s : targets){
        int tab = 0;
        for(char c : s){
            if(fastest.at(int(c - 'A')).first == -1){
                tab = -1;
                break;
            }
            else {
                tab += fastest.at(int(c - 'A')).second;
            }
        }
        answer.push_back(tab);
    }
    
    return answer;
}