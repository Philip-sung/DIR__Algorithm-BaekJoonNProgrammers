#include <vector>
#include <algorithm>
using namespace std;
int solution(int k, vector<int> tangerine)
{
    int t[10000001]={};
    int i, c=0, p=0;
    for(i=0; i<tangerine.size(); ++i)
        t[tangerine[i]]++;
    vector<int> v;
    for(i=1; i<=10000000; ++i)
        if(t[i])
            v.push_back(t[i]);
    sort(v.rbegin(), v.rend());
    while(k>0)
    {
        k-=v[p++];
        c++;
    }
    return c;
}