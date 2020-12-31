#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    if(N==1)
    {
        cout<<"*\n";return;
    }
    for(ll i=1;i<N;++i)
    {
        for(ll j=0;j<N;++j)
        {
            if((i+j)==N)cout<<"*";
            else cout<<' ';
        }
        for(ll j=0;j<i-2;++j)cout<<' ';
        if(i!=1)cout<<"*";
        cout<<'\n';
    }
    for(ll i=0;i<2*N-1;++i)cout<<"*";cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/