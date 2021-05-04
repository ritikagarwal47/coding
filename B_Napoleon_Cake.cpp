#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll ans[N]={0};
    ll c=0;
    for(ll i=N-1;i>=0;--i)
    {
        c = max(c,A[i]);
        if(c>=1)ans[i]=1;
        else ans[i]=0;
        c--;
    }
    for(ll i=0;i<N;++i)cout<<ans[i]<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/