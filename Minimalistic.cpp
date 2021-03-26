#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[1000000+6];
void pre()
{
    //memset(dp,INT_MAX,sizeof(dp));
    for(ll i=0;i<10;++i)dp[i]=-1;
    dp[2]=0;dp[5]=1;dp[8]=2;
    for(ll i=10;i<=1000005;++i)
    {
        ll p = -1 ;
        //ll q = LONG_MAX ;
        if(i%5==0)p = dp[i/5] ;
        //else p=-1;
        ll q = dp[i-3] ;
        //if(i==40)cout<<p<<' '<<q<<'\n';
        if(q!=-1 and p!=-1)dp[i] = min(p + 1,q + 1);        
        else if(q!=-1)dp[i] = q + 1;
        else if(p!=-1)dp[i] = p + 1;
        else dp[i]  = -1;
        //cout<<dp[i]<<' '<<i<<'\n';
    }
    //for(auto i : dp)cout<<i<<' ';cout<<'\n';
}
void solve()
{
    ll N;cin>>N;
    cout<< dp[N] <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int T=1;        cin>>T;
pre();
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/