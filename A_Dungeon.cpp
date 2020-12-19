#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll a,b,c;cin>>a>>b>>c;
    ll K = max(a,max(b,c))/7 + 1;
    ll s = 0;
    if(a<K)
    {
        cout<<"No\n";return ;
    }
    if(b<K)
    {
        cout<<"No\n";return ;
    }
    if(c<K)
    {
        cout<<"No\n";return ;
    }
    s = a-K + b - K + c -K ;
    if(s%7==0)
    {
        cout<<"Yes\n";return;
    }
    cout<<"No\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/