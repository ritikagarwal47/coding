#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll f=0,s=0;
    while(N>0)
    {
        if(N%7==0)
        {
            s = N/7;
            break;
        }
        f++;N-=4;
    }
    if(N<0)
    {
        cout<<"-1\n";return;
    }
    for(ll i=0;i<f;++i)cout<<"4";
    for(ll i=0;i<s;++i)cout<<"7";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/