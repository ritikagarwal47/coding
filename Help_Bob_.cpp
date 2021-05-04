#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;K--;
    ll x,ans=0,y=0;
    //cout<< (1<<K)<<' '<<(K<<1)<<'\n';
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        if(i==0)
        {
            if(x&(1<<K))++ans;
        }
        else if((y^x)&(1<<K))++ans;
        //cout<<(y^x)<<' '<<x<<' '<<y<<'\n';
        y=x;
        //cout<<y<<' '<<ans<<'\n';
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/