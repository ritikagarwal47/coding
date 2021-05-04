#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll a=1,b=2,c=3,d=4;
    ll p=3;
    cout<<a<<' ';
    for(ll i=0;i<N-1;++i)
    {
        //p*=2;
        a = a+p;
        cout<<a<< ' ';p*=2;
       // p = p * 2LL ;
    }
    cout<<'\n';
    cout<<b<<' ';p=3;
    for(ll i=0;i<N-1;++i)
    {
        b = b+p;
        cout<<b<< ' ';
        p*=2;
    }
    cout<<'\n';
    cout<<d<<' ';p=6;
    for(ll i=0;i<N-1;++i)
    {
        d = d+p;
        cout<<d<< ' ';
        p*=2;
    }
    cout<<'\n';
    cout<<c<<' ';p=3;
    for(ll i=0;i<N-1;++i)
    {
        c= c+p;
        cout<<c<< ' ';
        p*=2;
    }
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/