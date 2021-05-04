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
        if(M[A[x-1]]==1)--ans;
        --M[A[x-1]];
        if(M[y]==0)++ans;
        ++M[y];A[x-1]=y;
        cout<<ans<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/