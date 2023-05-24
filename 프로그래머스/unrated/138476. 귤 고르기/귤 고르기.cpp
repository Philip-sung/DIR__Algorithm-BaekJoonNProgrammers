#include <bits/stdc++.h>
//greedy
using namespace std;

int solution(int k, vector<int> tangerine) {
    int answer = 0;
    vector<int> cnt;
    sort(tangerine.begin(), tangerine.end());
    int n = -1, tmp = 0;

    for(auto t:tangerine){
        if(n!=t){
            cnt.push_back(tmp);
            tmp = 0, n = t;
        }
        tmp++;
    }
    cnt.push_back(tmp);
    sort(cnt.begin(), cnt.end());

    for(auto c:cnt)cout<<c<<' ';cout<<'\n';
    int idx = cnt.size() - 1;
    while(k>0){
        answer++;
        k-=cnt[idx--];
    }

    return answer;
}