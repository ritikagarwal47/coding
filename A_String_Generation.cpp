#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,M;cin>>N>>M;
    for(ll i=0;i<M;++i)cout<<'a';
    ll p = N - M;
    for(ll i=0;i<p/3;++i)
    {
        cout<<"bca";
    }
    if(p%3==1)cout<<'b';
    else if(p%3==2)cout<<"bc";
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/