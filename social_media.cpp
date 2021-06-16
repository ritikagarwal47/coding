#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,Q;cin>>N>>Q;
    ll dp[N+1];for(ll i=0;i<=N;++i)dp[i]=1;
    while(Q--)
    {
        char a;cin>>a;
        if(a=='Q')
        {
            ll b;cin>>b;
            cout<<dp[b]<<'\n';
        }
        else
        {
            ll b,c;cin>>b>>c;
            ll p = dp[b] + dp[c];
            dp[b]=dp[c]=p;
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/