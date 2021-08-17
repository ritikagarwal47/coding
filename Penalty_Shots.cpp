#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a=0,b=0;
    for(ll i=0;i<10;++i)
    {
        ll x;cin>>x;
        if(i&1)a+=x;
        else b+=x;
    }  
    if(a==b)cout<<"0\n";
    else (a<b)?cout<<"1\n":cout<<"2\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/