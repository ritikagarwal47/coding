#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;
    ll A[N+1];for(ll i=1;i<=N;++i)cin>>A[i];

    ll ans=0;
    for(ll i=1;i<=N;++i)
    {
        for(ll j=i+1;j<=N;++j)
        {
            if(abs(A[i]-A[j])==(i*i + j*j))++ans;
        }
    }  
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/