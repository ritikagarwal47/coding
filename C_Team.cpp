#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a,b;cin>>a>>b;
    if((2*a + 2)<b)cout<<"-1";
    else if(a>(b+1))cout<<"-1";
    else
    {
        while(a<b)
        {
            if((a)==(b-2)){cout<<"11";break;}
            else if((a)==(b-1)){cout<<"1";break;}
            cout<<"110";b-=2;--a;
        }
        ll p = min(a,b);
        for(ll i=0;i<p;++i)
        {
            cout<<"01";--a;--b;
        }
        if(a)cout<<"0";
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/