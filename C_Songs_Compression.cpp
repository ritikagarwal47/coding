#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll x,y;vector<ll> V;ll s=0;
    for(ll i=0;i<N;++i)
    {
        cin>>x>>y;V.push_back(x-y);s+=x;
    }
    sort(V.begin(),V.end(),greater<ll>());
    ll i=0;
    while(i<N)
    {
        if(s<=M)
        {
            cout<<i;return;
        }
        s-=V[i];++i;
    }
    if(s<=M)
    {
        cout<<i;return;
    }
    cout<<"-1";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/