#include <string>
#include <vector>
#include <unordered_map>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    vector<string> answer;
    unordered_map<string, int> mPlayers;
    unordered_map<int, string> mRanks;
    
    for(int i = 0; i < players.size(); i++){
        pair<string, int> player(players.at(i), i);
        pair<int,string> rank(i, players.at(i));
        
        mPlayers.insert(player);
        mRanks.insert(rank);
    }
    
    for(string s : callings){
        auto curPlayerIter = mPlayers.find(s);
        int curPlayerRank = --(curPlayerIter->second);
        
        auto curRankIter = mRanks.find(curPlayerRank);
        string exPlayer = curRankIter->second;
        curRankIter->second = s;
        
        auto exPlayerIter = mPlayers.find(exPlayer);
        int exPlayerRank = ++(exPlayerIter->second);
        
        auto exRankIter = mRanks.find(exPlayerRank);
        exRankIter->second = exPlayer;
    }
    
    for (int i = 0; i < mRanks.size(); i++){
        answer.push_back(mRanks[i]);
    }
    
    
    
    return answer;
}