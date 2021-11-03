#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a,b,c;cin>>a>>b>>c;
    ll mx = max(a,max(b,c)); 
    if(a>b and a>c)cout<<0<<' ';
    else cout<<mx+1-a<<' ';
    if(b>a and b>c)cout<<0<<' ';
    else cout<<mx+1-b<<' ';
    if(c>b and c>a)cout<<0<<' ';
    else cout<<mx+1-c<<' ';
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/