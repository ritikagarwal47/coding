#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll K;cin>>K;
    ll a,b;cin>>a>>b;
    ll n = a%b;
    ll ans=0;
    while(n>0 and K>0)
    {
        n*=10;
        //if(n<b)continue;
        ll p = n%b;
        ll q = n/b;
        ans+=q;
        K--;
        n=p;
        //cout<<q<<' ';
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/