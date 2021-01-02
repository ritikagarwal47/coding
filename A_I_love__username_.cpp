#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll x;cin>>x;
    ll mx=x;
    ll mn=x;
    ll ans=0;
    for(ll i=1;i<N;++i)
    {
        cin>>x;
        if(x>mx or x<mn)++ans;
        mx = max(mx,x);
        mn = min(mn,x);
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/