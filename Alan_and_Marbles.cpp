#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll ans=LONG_MAX,x,p=0;
    ll a=0,m=0;;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        ll a = max(i%N,x);
        if(a<ans)
        {
            ans=a;p=i+1;
        }
    } 
    cout<<p<<'\n'; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/