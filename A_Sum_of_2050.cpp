#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll ans=0;
    
    ll x = 2050000000000000000;
    //cout<<x<<'\n';
    for(ll i=15;i>=0;--i)
    {
        //ll x = 2050*pow(10,i);
        //cout<<x<<'\n';
        
        if(N>=x)
        {
            ll p = N/x;
            ans+=p;
            N -= p*x;
            //cout<<N<<' ';            
        }
        x/=10;
    } 
    //cout<<ans<<' '; 
    N!=0?cout<<"-1\n":cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/