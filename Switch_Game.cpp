#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    bool A[N+1];for(ll i=1;i<=N;++i)A[i]=0;
    for(ll i=1;i<=N;++i)
    {
        for(ll j=i;j<=N;j+=i)
        {
            if(A[j])A[j]=0;
            else A[j]=1;
        }
    }
    //ll ans=0;
    for(ll i=1;i<=N;++i)
        if(A[i])cout<<i<<' ';
    cout<<'\n';
    // cout<<ans<<' ';
    // cout<< (ll)sqrt(N)<<'\n';
    // }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/