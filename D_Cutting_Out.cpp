#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
map<ll,ll> M;
void solve()
{
    ll N,K;cin>>N>>K;
    ll x;for(ll i=0;i<N;++i)cin>>x,++M[x];
    ll l=1,h=N;
    while(l<h)
    {
        ll m = (l+h)>>1;
        ll p = 0;
        for(auto i:M)
        {
            if(i.second>=m)p+=i.second/m;
        }
        if(p>=K)l=m+1;
        else h=m;
    }
    //cout<<l<<' '<<h<<'\n';
    if(l!=1)--l;
    ll p=0;
    for(auto i:M)
    {   
        while(i.second>=l)
        {
            cout<<i.first<<' ';i.second-=l;++p;
            if(p==K)return;
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/