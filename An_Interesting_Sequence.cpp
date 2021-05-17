#include<bits/stdc++.h>
#define ll long long int
using namespace std;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[4000005];
void pre()
{
    ll pre[4000005];
    for(ll i=0;i<4000005;++i)pre[i]=i,dp[i]=0;
    for(ll p=2;p<4000005;++p)
    {
        if(pre[p]==p)
        {
            pre[p]=p-1;
            for(ll i=2*p;i<4000005;i+=p)pre[i]=(pre[i]/p)*(p-1);
        }
    }
    for(ll i=1;i<4000005;++i)
    {
        dp[i]+=i-1;
        for(ll j=2*i;j<4000005;j+=i)dp[j]+=i*((1+pre[j/i])/2);
    }
}
void solve()
{
    ll N;cin>>N;cout<<dp[4*N+1]<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Gupta Ji*/