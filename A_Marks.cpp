#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    string A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    map<ll,ll> mp;
    for(ll i=0;i<M;++i)
    {
        ll mx=0;
        for(ll j=0;j<N;++j)mx = max(mx,(ll)(A[j][i] - '0'));
        for(ll j=0;j<N;++j)
            if(mx==(A[j][i]-'0'))mp[j] = 1;
        //cout<< mx <<'\n';
    }
    cout<< mp.size() <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/