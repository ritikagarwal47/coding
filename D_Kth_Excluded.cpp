#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,Q;cin>>N>>Q;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    while(Q--)
    {
        ll K;cin>>K;
        ll l=0,h=N;
        while(l<h)
        {
            ll m = (l+h)>>1;
            if((A[m]-m)<=K)l=m+1;
            else h=m;
        }
        cout<<K+l<<'\n';
    } 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/