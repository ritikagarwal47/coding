#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    if(N==1)
    {
        cout<<"1\n";return;
    }
    ll a = 2*N-1;
    ll b=1;
    for(ll i=0;i<N;++i)
    {
        //b=1;
        for(ll j=0;j<i;++j)
        {
            cout<<' ';//++b;
        }
        for(ll j=0;j<a;++j)cout<<b;//i+1;
        a-=2;++b;
        cout<<'\n';
    }
    a=3;
    for(ll i=0;i<N-1;++i)
    {
        //b=1;
        for(ll j=0;j<N-i-2;++j)
        {
            cout<<' ';//++b;
        }
        for(ll j=0;j<a;++j)cout<<b;
        a+=2;++b;
        cout<<'\n';
    }
    //cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/