#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll n = 500000+5;
    bool prime[n]; 
    memset(prime, true, sizeof(prime));   
    for (ll p=2; p*p<=n; p++) 
    { 
        if (prime[p] == true) 
        { 
            for (ll i=p*p; i<=n; i += p)prime[i] = false; 
        } 
    } 
    //ll a=N;
    //cout<<N<<' ';
    //ll i=1;
    ll c=0;
    prime[1]=true;
    while(1)
    {
        for(ll i=1;i<=n;++i)
        {
            if(prime[i])
            {
                ++c;
                cout<< i*N <<' ';
            }
            if(c==N)break;
            
        }
        if(c==N)break;
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/