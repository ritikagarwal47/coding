#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[N][M];
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)cin>>A[i][j];
    }
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            if((i+j)&1 and A[i][j]%2==0)++A[i][j];
            else if(A[i][j]&1 and (i+j)%2==0)++A[i][j];
        }
    }
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            cout<<A[i][j]<<' ';
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