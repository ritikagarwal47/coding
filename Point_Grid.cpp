#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    ll ans=A[N-1];
    for(ll i=N-2;i>=0;--i)
    {
        //cout<<ans<<' ';  
        ll p = A[i+1];
        --p;
        if(A[i]>p)ans+= A[i] - p ;
    } 
    cout<<ans<<'\n';  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/