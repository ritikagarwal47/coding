#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    // ll V[51];//(51);
    // for(ll i=0;i<=50;++i)
    // {
    //     V[i]=0;
    // }
    map<ll,ll> M;
    ll N,K;cin>>N>>K;
    ll x;
    for(ll i=1;i<=N;++i)
    {
        cin>>x;
        if(M[x]==0)M[x]=i;
    }
    //for(auto i:V)cout<<i<<' ';cout<<'\n';
    //ll A[K];for(ll i=0;i<K;++i)cin>>A[i];
    //ll l=0,c=1;
    for(ll i=1;i<=K;++i)
    {
        cin>>x;cout<<M[x]<<' ';
        // ll p = V[x][0];
        // ll q = i - V[x][1];
        // V[x][1]=i;
        for(auto i:M)
            if(i.second<M[x])M[i.first]=i.second + 1;
        M[x]=1;
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/