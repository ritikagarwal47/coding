#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,M;cin>>N>>M;
    ll x=0,e=0,o=0;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        if(x<=9 or x>=80)++e;
	    else ++o;
    }
    x=0;
    if(e%M==0)x=e/M;
    else x=e/M + 1;

    if(o%M==0)x+=o/M;
    else x+= o/M + 1;

    cout<<x<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/