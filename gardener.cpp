#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A1[N],A2[N]; 
    for(ll i=0;i<N;++i)cin>>A1[i];
    for(ll i=0;i<N;++i)cin>>A2[i];
    ll ans1=0,ans2=0;
    for(ll i=0;i<N;++i)
    {
        if(i&1)ans1+=A1[i];
        else ans1+=A2[i];
    }
    for(ll i=0;i<N;++i)
    {
        if(i&1)ans2+=A2[i];
        else ans2+=A1[i];
    }
    cout<<min(ans1,ans2) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/