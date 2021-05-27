#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dp[5000+3][5000+3];
ll mcm(ll i,ll j,vector<ll>&V1,vector<ll>&V2,ll n1,ll n2,ll c)
{
    //if(c==0)return dp[i][j]=0;
    if(i==n1)return 0;
    if(j==n2)return mod;
    if(dp[i][j]!=-1)return dp[i][j];
    ll a,b;
    if(dp[i+1][j+1]!=-1)a=dp[i+1][j+1];
    else a = mcm(i+1,j+1,V1,V2,n1,n2,c-1);
    if(dp[i][j+1]!=-1)b = dp[i][j+1];
    else b = mcm(i,j+1,V1,V2,n1,n2,c);
    return dp[i][j]=min(abs(V2[j]-V1[i]) + a,b);
}
void solve()
{
    ll N;cin>>N;
    ll A[N];vector<ll> V1,V2;
    memset(dp,-1,sizeof(dp));
    for(ll i=0;i<N;++i)
    {
        cin>>A[i]; 
        if(A[i])V1.push_back(i);
        else V2.push_back(i);
    }
    ll ans=mcm(0,0,V1,V2,V1.size(),V2.size(),V1.size());
    // for(auto i:V)
    // {
    //     ll a=LONG_MAX,b=LONG_MAX;
    //     for(ll j=i;j<N;++j)
    //     {
    //         if(!A[j])
    //         {
    //             a=j;break;
    //         }
    //     }
    //     for(ll j=i;j>=0;--j)
    //     {
    //         if(!A[j])
    //         {
    //             b=j;break;
    //         }
    //     }
        
    //     if(b!=LONG_MAX)
    //     {
    //         A[b]=1;ans += abs(i-b);
    //     }
    //     else A[a]=1,ans += abs(i-a);
    //     //cout<<a<<' '<<b<<' '<<i<<' '<<ans<<'\n';
    // }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/
