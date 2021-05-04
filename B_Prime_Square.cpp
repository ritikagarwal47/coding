#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N][N];
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<N;++j)
        {
            if(i==j)A[i][j]=1;
            else if((i-j)==1)A[i][j]=1;
            else if(i==0 and j==N-1)A[i][j]=1;
            else A[i][j]=0;
        }
    }
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<N;++j)
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