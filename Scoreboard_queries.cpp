#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,Q;cin>>N>>Q;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    map<ll,ll> M;ll x,y;
    for(ll i=0;i<N;++i)++M[A[i]];
    ll ans=M.size()+1;
    while(Q--)
    {
        cin>>x>>y;
        //cout<<N+1<<'\n';
        if(M[y]==0)cout<<++ans<<'\n';
        else cout<<ans<<'\n';
        --M[A[x-1]];
        if(M[A[x-1]]==0)--ans;
        ++M[y];
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/