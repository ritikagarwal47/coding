#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll a=0,b=0;
    for(ll i=0;i<N;++i)
    {
        ll x;cin>>x;
        if(x&1)++a;
        else ++b;
    }
    cout<< min(a,N/2) + min(b,(N+1)/2) <<'\n'; 

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/