#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll x,ans[N+1];//={0};
    for(ll i=1;i<=N;++i)cin>>ans[i];
    ll mx=0;
    for(ll i=1;i<=N;++i)
    {
        x=ans[i];
        ll c=0;
        while(x!=-1)
        {
            x=ans[x];++c;
        }
        mx=max(mx,c);
    }
    // map<ll,ll> M;
    // for(ll i=1;i<=N;++i)++M[ans[i]],cout<<ans[i]<<' ';
    // ll mx=0;
    // for(auto i: M)mx=max(mx,i.second);
    cout<<mx+1<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/