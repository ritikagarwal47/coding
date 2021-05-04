#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll x,s=0,ans=0; 
    cin>>x;
    s+=x;
    for(ll i=0;i<N-1;++i)
    {
        cin>>x;
        ll p = x;
        //s+=x;
        x=(x*100 + K - 1)/K;
        //cout<<x<<' '<<s<<'\n';
        if(s<x)
        {
            ans=max(ans,abs(s-x));
        }
        s+=p;
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/