#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    char A[N+1][M+1];
    ll ans=0;
    for(ll i=1;i<=N;++i)
        for(ll j=1;j<=M;++j)
            cin>>A[i][j];
    bool check[N]={0};
    for(ll j=1;j<=M;++j)
    {
        bool ok=true;
        for(ll i=1;i<N;++i)
        {
            if(!check[i] and A[i][j]>A[i+1][j])
            {
                ok=false;break;
            }
        }
        if(!ok)++ans;
        if(ok)
        {
            for(ll i=1;i<N;++i)
            {
                if(A[i][j]<A[i+1][j])check[i]=1;
            }
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