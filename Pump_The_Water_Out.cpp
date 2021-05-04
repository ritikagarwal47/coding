#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll t;
    vector<ll> V;
    while(cin>>t)V.push_back(t);
    ll ans=0;
    for(ll i=1;i<V.size();++i)
    {
        if(V[i]!=0 and V[i-1]!=0)++ans;
    }
    //cout<<ans<<'\n';
    if(ans%2==0)cout<<ans/2<<' '<<ans/2<<'\n';
    else cout<<ans/2<<".5 "<<ans/2<<".5 \n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/