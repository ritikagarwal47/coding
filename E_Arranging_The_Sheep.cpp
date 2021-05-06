#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation

void solve()
{
    ll N;cin>>N;
    string A;cin>>A;
    vector<ll> B;
    for (ll i = 0; i < A.size();++i)
    {
        if (A[i] == '*')B.push_back(i);
    }
    ll mid = B.size()/2;
    ll ans = 0;
    for (ll i = 0; i < B.size();++i)
    {
        ll start = B[i];
        ll dest = B[mid] - (mid - i);
        ans = (ans + abs(dest - start));
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/