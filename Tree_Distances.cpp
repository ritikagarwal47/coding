#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll x,y;cin>>x>>y;
    ll p = x + y;
    ll q = sqrt(p);
    if(p!=(q*q))
    {
        cout<<"NO\n";return;
    }   
    if(q&1 and x%q==0)
    {
        cout<<"NO\n";return;
    }
    if(q%2==0 and x%q!=0)
    {
        cout<<"NO\n";return;
    }
    cout<<"YES\n";
    cout<<q<<'\n';
    ll a = 1 ;
    while(a<=q/2)
    {
        if(2*a<=q)cout<<a<<' '<<2*a<<'\n';
        if((2*a + 1)<=q)cout<<a<<' '<<2*a + 1 <<'\n';
        ++a;
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/