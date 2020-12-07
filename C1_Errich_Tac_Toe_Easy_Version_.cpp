#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    char x;
    if(N<3)
    {
        for(ll i=0;i<N;++i)
        {
            for(ll j=0;j<N;++j)cin>>x,cout<<x;cout<<'\n';
        }
        return;
    }
    char A[N][N];
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<N;++j)cin>>A[i][j];
    }
    for(ll i=1;i<N-1;++i)
    {
        for(ll j=0;j<N;++j)
        {
            if(A[j][i-1]=='X' and A[j][i]=='X' and A[j][i+1]=='X')A[j][i]='O';
            else if(A[j][i-1]=='O' and A[j][i]=='O' and A[j][i+1]=='O')A[j][i]='X';
        }
    }
    //for(ll i=0;i<N;++i){for(ll j=0;j<N;++j)cout<<A[i][j];cout<<'\n';}
    for(ll i=1;i<N-1;++i)
    {
        for(ll j=0;j<N;++j)
        {
            if(A[i-1][j]=='X' and A[i][j]=='X' and A[i+1][j]=='X')A[i][j]='O';
            else if(A[i-1][j]=='O' and A[i][j]=='O' and A[i+1][j]=='O')A[i][j]='X';
        }
    }
    //for(ll i=0;i<N;++i){for(ll j=0;j<N;++j)cout<<A[i][j];cout<<'\n';}
    
    for(ll i=0;i<N;++i){for(ll j=0;j<N;++j)cout<<A[i][j];cout<<'\n';}
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/