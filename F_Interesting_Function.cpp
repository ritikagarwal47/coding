#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll L,R;cin>>L>>R;
    // ll a = (R-L);//11,11,11,111
    // a += a/10;
    ll p=1;
    ll a=0;
    for(ll i=0;i<12;++i)
    {
        //ll p = 1;//pow(10,i);//cout<<p<<' ';
        a+= R/p;
        p*=10;
    }
    ll b=0;p=1;
    for(ll i=0;i<12;++i)
    {
        //ll p = pow(10,i);//cout<<p<<' ';
        b+= L/p;  p*=10;    
    }
    cout<<(a-b)<<'\n'; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/