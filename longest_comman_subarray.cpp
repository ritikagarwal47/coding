#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
struct node{
    map<ll,ll> M;
};
void solve()
{
    ll N,M;cin>>M>>N;
    node dp[N+1];
    if(M==1)
    {
        ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
        cout<<N<<'\n';
        return;
    }  
    for(ll i=0;i<M;++i)
    {
        ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
        for(ll i=0;i<N-1;++i)
        {
            ll p = dp[A[i]].M[A[i+1]];
            dp[A[i]].M[A[i+1]] = p+1;
        }
    }
    ll ans=0;
    ll lcs[N+1];for(ll i=1;i<=N;++i)lcs[i]=1;
    for(ll i=1;i<=N;++i)
    {
        //cout<<dp[i].M.size()<<' '<<i<<'\n';
        if(dp[i].M.size()==1 and (*(dp[i].M.begin())).second==M)
        {
            //cout<<(*(dp[i].M.begin())).first<<' '<<i<<'\n';
            ll p = lcs[(*(dp[i].M.begin())).first]+lcs[i];
            lcs[i]=p;
            lcs[(*(dp[i].M.begin())).first]=p;
        }
    }
    //for(auto i:lcs)cout<<i<<' ';cout<<'\n';
    for(ll i=1;i<=N;++i)ans=max(ans,lcs[i]);
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/