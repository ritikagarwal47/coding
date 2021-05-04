#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll s=0;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i],s =( s+ A[i] + mod)%mod;
    ll Q,x;cin>>Q;
    //cout<<s<<'\n';
    //s+=mod;
    s%mod;
    while(Q--)
    {
        cin>>x;
        s = (s*2)%mod;
        cout<<s<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/