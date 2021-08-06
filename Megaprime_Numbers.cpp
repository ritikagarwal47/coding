#include <bits/stdc++.h>
#define ll int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll M = 1000000000;
vector<bool> prime(M+5);
void pre()
{
    //memset(prime.begin(),true,sizeof(prime));
    //fill(prime.begin(),prime.end(),true);
    prime[0]=prime[1]=true;
    for(ll i=2;i*i<=M;++i)
    {
        if(!prime[i])
        {
            for(ll j=i*i;j<=M;j+=i)
            {
                prime[j]=true;
            }
        }
    }
    //for(ll i=0;i<1000;++i)cout<<prime[i]<<' ';
}
bool check(ll N)
{
    while(N>0)
    {
        ll p = N%10;N/=10;
        if(p==2 or p==3 or p==5 or p==7){}
        else return false;
    }
    return true;
}
void solve()
{
    ll l,r;cin>>l>>r;
    ll ans=0;
    for(ll i=l;i<=r;++i)
    {
        if(!prime[i]  and check(i))++ans;//,cout<<i<<' ';
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
pre();
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/