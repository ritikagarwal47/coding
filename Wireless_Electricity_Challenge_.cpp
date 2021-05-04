#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e6;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll a,b,c,d;
    for(ll i=0;i<N;++i)cin>>a>>b;
    for(ll i=0;i<M;++i)
    {
        cin>>a>>b>>c>>d;
        if(c<a)a=c,b=d;
        if(i%2)cout<<(mod+1-a)<<' '<<(mod-b)<<'\n';
        else cout<<(-a)<<' '<<(-b-1)<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/