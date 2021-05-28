#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
// ll ans;ll N;
// ll A[2000+3];
// ll dp[2000+3];
// ll fun(ll i,ll c,ll ans)
// {
//     cout<<i<<' '<<c<<' '<<ans<<'\n';
//     if(ans<0)return -mod;
//     if(i==N)
//     {
//         cout<<c<<'\n';
//         return c;
//     }
//     if(dp[i]!=-1LL)return dp[i];
//     if(A[i]>=0)return dp[i] = fun(i+1,c+1,ans+A[i]);
//     return dp[i] = max(fun(i+1,c,ans),fun(i+1,c+1,ans+A[i]));
// }
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll ans = N; 
    //memset(dp,-1,sizeof(dp));
    //cout<< fun(0,0,0)<<'\n';
    priority_queue<ll,vector<ll>,greater<ll>> q;
    ll a=0;
    for(ll i=0;i<N;++i)
    {
        a+=A[i];
        if(A[i]<0)q.push(A[i]);
        if(a<0)
        {
            ll c = q.top();q.pop();
            a += abs(c);
            --ans;
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/