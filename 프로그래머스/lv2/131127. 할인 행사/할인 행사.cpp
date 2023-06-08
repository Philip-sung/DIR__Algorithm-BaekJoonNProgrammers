#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

int solution(vector<string> want, vector<int> number, vector<string> discount) {
    int answer = 0;
    int num = 0;
    for(int i : number){
        num += i;
    }
    
    unordered_map<string,int> wishlist_orig;
    for(int i = 0; i < want.size(); i++){
        wishlist_orig.insert( pair<string,int>(want.at(i), number.at(i)) );
    }
    for(int i = 0; i < discount.size() - num + 1; i++){
        unordered_map<string,int> wishlist = wishlist_orig;
        for(int j = 0; j < num; j++){
            unordered_map<string,int>::iterator iter = wishlist.find(discount.at(i + j));
            if(iter != wishlist.end()){
                (*iter).second--;
            }
        }
        
        bool isPossible = true;
        for(pair<string,int> p : wishlist){
            if(p.second != 0)
                isPossible = false;    
        }
        if(isPossible)
            answer++;
    }
    return answer;
}