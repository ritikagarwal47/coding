#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N][N];memset(A,0,sizeof(A));
    ll B[N];for(ll i=0;i<N;++i)cin>>B[i];
    //for(ll i=0;i<N;++i)A[i][i]=B[i];
    for(ll i=N-1;i>=0;--i)
    {
        ll x = B[i],p=x;
        ll a=i,b=i;
        while(p)
        {
            A[a][b] = x;
            if((a+1)<N and A[a+1][b]==0)a++;
            else if((b-1)>=0 and A[a][b-1]==0)--b;
            --p;
        }
    }
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<=i;++j)cout<<A[i][j]<<' ';cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/