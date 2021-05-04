#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e8;
//The end result of coders personal growth is,there codes becomes there documentation
ll N1,N2,K1,K2;
ll dp[100+2][100+2][11][11];
ll fun(ll a,ll b,ll l,bool ok,ll k1,ll k2)
{
    if(a>N1 or b>N2)return 0;
    if(k1>K1 or k2>K2)return 0;
    if(l==(N1+N2))
    {
        //cout<<k1<<' '<<k2<<'\n';
        //cout<<a<<' '<<b<<'\n';
        return 1;
    }
    if(dp[a][b][k1][k2]!=-1)return dp[a][b][k1][k2];
    if(k1==K1 and k2==K2)return 0;
    if(a==N1 and b==N2)return 0;
    ll ans=0;
    if(a==N1 or k1==K1)ans = fun(a,b+1,l+1,false,0,k2+1);
    else if(b==N2 or k2==K2) ans = fun(a+1,b,l+1,true,k1+1,0);
    else
    {
        ans += fun(a,b+1,l+1,false,0,k2+1);ans%=mod;
        ans += fun(a+1,b,l+1,true,k1+1,0);ans%=mod;
    }
    ans%=mod;
    return dp[a][b][k1][k2] = ans;
}
void solve()
{
    cin>>N1>>N2>>K1>>K2;
    memset(dp,-1,sizeof(dp));
    ll ans = 0;
    ans+= fun(1,0,1,true,1,0);ans%=mod;
    ans+= fun(0,1,1,false,0,1);ans%=mod;
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/