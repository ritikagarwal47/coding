#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,P,X,Y;cin>>N>>P>>X>>Y;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll ans=0;
    for(ll i=0;i<P;++i)
    {
        if(A[i])ans+=Y;
        else ans+=X;
    }  
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/