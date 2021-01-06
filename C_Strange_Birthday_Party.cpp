#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll C[M]; for(ll i=0;i<M;++i)cin>>C[i];
    //ll vis[M]={0};
    sort(A,A+N,greater<ll>());
    ll ans=0,a=0;
    for(ll i=0;i<N;++i)
    {
        if((a+1)<A[i])
        {
            ans+= C[a];
            //vis[a]=1;
            ++a;
            //vis[A[i]]=1;
        }
        else
        {
            ans+= C[A[i]-1];
            //vis[A[i]]=1;
        }
        //cout<<ans<<'\n';
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/