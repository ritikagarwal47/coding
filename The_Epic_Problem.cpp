#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll y;
void solve()
{
    ll N;cin>>N;
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        ll x,y;cin>>x>>y;
        if(y<=21600)continue;
        else if(x>21600)ans+=(y-x);
        else ans += (y-21600);
    } 
    //cout<<ans<<'\n';
    cout<< ans*y <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T>>y;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/