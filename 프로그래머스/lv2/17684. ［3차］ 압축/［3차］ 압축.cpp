#include <string>
#include <vector>

using namespace std;

int Search(string& s, vector<string>& dict);

vector<int> solution(string msg) {
    vector<int> answer;
    vector<string> dictionary;
    for(char c = 'A'; c <= 'Z'; c++){
        string str(1,c);
        dictionary.emplace_back(str);
    }
    
    while(msg != ""){
        int idx = Search(msg, dictionary);
        answer.emplace_back(idx);
    }
    
    return answer;
}

int Search(string& s, vector<string>& dict){
    int retVal = 0;
    int dictIdxSize = dict.size() - 1;
    for(int i = dictIdxSize; i >= 0; i--){
        string word = dict.at(i);
        if(word.length() > s.length())
            continue;
        if(s.substr(0,word.length()) == word){
            if(s.length() > word.length()){
                string newWord = word + s.at(word.length());
                dict.push_back(newWord);
            }
            s.erase(0,word.length());
            retVal = i + 1;
            break;
        }
    }
    return retVal;
}