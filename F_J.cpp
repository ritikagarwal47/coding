#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll a = N/2;
    ll b= (N-3)/2;
    ll c=1;
    for(ll i=1;i<=N;++i)
    {
        if(i<=(N+1)/2)
        {
            for(ll j=0;j<a;++j)cout<<' ';
            for(ll j=0;j<b;++j)cout<<c++;
            --a;
        }
        else
        {
            for(ll j=0;j<=a;++j)cout<<' ';
            for(ll j=0;j<b;++j)cout<<c++;
            ++a;
        }
        cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/