#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll x,y;cin>>x>>y;
    ll p = x + y;
    ll n = sqrt(p);
    if(p!=(n*n))
    {
        cout<<"NO\n";return;
    }   
    if(n==1)
    {
        if(x==1)cout<<"YES\n1\n";
        else cout<<"NO\n";
    }
    ll e=1,o=n-1;
    bool ok=false;
    while(o>=1)
    {
        p = e*o*2;
        if(p==y)
        {
            ok=true;break;
        }
        ++e;--o;
    }
    if(ok)
    {
        cout<<"YES\n"<<n<<'\n';
        for(ll i=1;i<=o;++i)cout<< 1 <<' '<<i+1<<'\n';
        for(ll i=1;i<e;++i)cout<< "2 "<< o + i + 1 <<'\n';
    }
    else cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/