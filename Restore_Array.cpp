#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,Q;cin>>N>>Q;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll B[N];B[0]=A[0];
    for(ll i=1;i<N;++i)
    {
        B[i]= A[i] - A[i-1];
        A[i-1]=0; 
    }
    A[N-1]=0;   
    for(ll i=0;i<Q;++i)
    {
        ll x,y,z;cin>>x>>y>>z;
        A[x-1]-=z;A[y]+=z;
    }
    for(ll i=1;i<N;++i)A[i]+=A[i-1];
    for(ll i=0;i<N;++i)cout<< A[i] + B[i] <<' ';
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/