#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,x;cin>>N>>x;
    ll p;map<ll,ll> M;
    for(ll i=0;i<N;++i)
    {
        cin>>p;
        ++M[p];
    }   
    ll ans=0;
    for(auto i : M)
    {
        ans+= (i.second-1);
    }
    if(x<=ans)cout<<M.size()<<'\n';
    else
    {
        ll a = x - ans;
        cout<< M.size() - a <<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/