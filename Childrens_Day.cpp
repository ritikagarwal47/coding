#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll fun(ll i,ll j)
{
    ll c=0;
    while(i!=0 and j!=0)
    {
        ++c;
        if(i>j)i-=j;
        else j-=i;
    }
    return c;
}
void solve()
{
    ll A,B,C,D;cin>>A>>B>>C>>D;
    ll ans=0;
    for(ll i=A;i<=B;++i)
    {
        for(ll j=C;j<=D;++j)
        {
            ans += fun(i,j);
        }
    }

    cout<< ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/