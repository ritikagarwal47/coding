#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string a,b;cin>>a>>b;
    ll c=N,d=N,e=N,f=N;
    ll x=0;
    for(ll i=N-1;i>=0;--i)
    {
        if(a[i]=='0')
        {
            c=x;break;
        }
        ++x;
    }  
    x=0;
    for(ll i=N-1;i>=0;--i)
    {
        if(a[i]=='1')
        {
            d=x;break;
        }++x;
    }  
    x=0;
    for(ll i=N-1;i>=0;--i)
    {
        if(b[i]=='0')
        {
            e=x;break;
        }++x;
    }  
    x=0;
    for(ll i=N-1;i>=0;--i)
    {
        if(b[i]=='1')
        {
            f=x;break;
        }++x;
    }
    //cout<<a<<' '<<b<<' '<<c<<' '<<d<<'\n';
    //cout<<c<<' '<<d<<' '<<e<<' '<<f<<'\n';

    ll ans1 = LONG_MAX;
    ans1=min(ans1,d+f);
    if(c!=N and e!=N)ans1=min(ans1,c+e);
    //cout<< min()  
    ll ans2 = LONG_MAX;
    ans2=min(ans2,c+f);
    //if(c!=LONG_MAX and e!=LONG_MAX)
    ans2=min(ans2,d+e);
    cout<<ans1<<' '<<ans2<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/