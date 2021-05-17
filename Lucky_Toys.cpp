#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool valid(ll N)
{
    ll a = N%10;
    ll b = N;
    while(b>9)b/=10;
    //cout<<a<<' '<<b<<'\n';
    return ((a+b)%2)==0;
}
void solve()
{
    ll N;cin>>N;
    ll ans=0;
    for(ll i=1;i<=N;++i)
    {
        if(valid(i))++ans;
    }
    cout<<ans<<'\n'; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/