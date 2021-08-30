#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
// struct three{
//     ll a,b,c;
// };
//pair<ll,ll> P;
// unordered_map<pair<ll,ll> ,ll> dp;
// ll fun(ll l,ll r,ll *A,ll K,ll X)
// {
//     if(l>r)return 0;
//     if(l==r)
//     {
//         return A[l];
//     }
//     if(dp.find({l,r})!=dp.end())return dp[{l,r}];
//     ll x = fun(l+1,r,A,K,X) + A[l];
//     dp[{l+1,r}]=x;
//     ll y = fun(l,r-1,A,K,X) + A[r];
//     dp[{l,r-1}]=y;
//     ll z = LONG_MAX;
//     if(K>0)
//     {
//         z = fun(l+1,r-1,A,K-1,X) + X;
//     }
//     dp[{l+1,r-1}]=z;
//     return dp[{l,r}]=min(x,min(y,z));
// }
void solve()
{
    ll N,K,X;cin>>N>>K>>X;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    //cout<< fun(0,N-1,A,K,X)<<'\n';
    //dp.clear();
    sort(A,A+N,greater<ll>());
    ll a=0,b=1;
    ll ans=0;
    while(K--)
    {
        if((A[a]+A[b])>X)
        {
            ans+=X;
            a+=2,b+=2;
        }
        else break;
    }
    for(ll i=a;i<N;++i)ans+=A[i];
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/