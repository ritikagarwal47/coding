#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a,b;cin>>a>>b;
    if(a==b)
    {
        cout<<"0\n";return;
    }
    ll x = min(a,b);
    ll y = max(a,b);
    
    ll p = (y-x)/2;
    ll ans=p;//cout<<p<<' ';
    if(a>b)
    {
        if((a&1 and b&1) or (a%2==0 and b%2==0))--ans;
        if(ans==0)cout<<"0\n";
        else cout<<"-"<<ans<<'\n';
    }
    else cout<< ans + 1 <<'\n';
    // ll c=0;
    // if(a&1)++c;
    // if(b&1)++c;
    // ans = max(ans,p+c);
    // c=0;
    // if(b%2==0)++c;
    // if(a%2==0)++c;
    // ans = max(ans,p+c);
    // cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/