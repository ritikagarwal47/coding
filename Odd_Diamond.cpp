#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll a=1;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<N-i-1;++j)cout<<' ';
        for(ll j=0;j<a;++j)cout<<'*';
        cout<<'\n';
        if(i<N/2)a+=2;
        else a-=2;
    }   
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/