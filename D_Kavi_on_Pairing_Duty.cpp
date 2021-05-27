#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=998244353;//1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
struct p{
    ll a,b;
};
ll dp[1000000+6];
p A[1000000+6];

void pre()
{
    //memset(dp,2,sizeof(dp));
    for(ll i=0;i<1000006;++i)dp[i]=2;
    //for(auto i:dp)cout<<i<<' ';
    dp[1]=A[1].a=A[1].b=1;
    for(ll i=2;i<1000006;++i)
    {
        for(ll j=i+i;j<1000006;j+=i)
        {
            ++dp[j];
        }
        //cout<<dp[i]<<' ';
    }
}
void solve()
{
    ll N;cin>>N;
    for(ll i=0;i<1000006;++i)A[i].a=0,A[i].b=0;//cout<<A[i].a<<' '<<A[i].b<<'\n';
    A[1].a=A[1].b=1;
    for(ll i=2;i<1000006;++i)
    {
        A[i].a = (A[i-1].b + dp[i])%mod;
        A[i].b = (A[i-1].b + A[i].a)%mod;
        //cout<<A[i].a<<' '<<A[i].b<<'\n';
    }
    cout<< A[N].a <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/