#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[2][N]; 
    for(ll i=0;i<2;++i)
    {
        for(ll j=0;j<N;++j)
        {
            cin>>A[i][j];
        }
    }
    ll pre[N],suf[N];
    pre[0] = A[0];
    for(ll i=1;i<N;++i)
    {
        pre[i] = pre[i-1] + A[i];
    }
    pre[N-1] = A[N-1];
    for(ll i=N-2;i>=0;--i)
    {
        suf[i] = suf[i-1] + A[i];
    }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/