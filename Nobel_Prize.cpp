#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll A[M+1]={0};ll x;
    for(ll i=0;i<N;++i)
    {
        cin>>x;++A[x];
    }  
    for(ll i=1;i<=M;++i)
    {
        if(A[i]==0)
        {
            cout<<"Yes\n";return;
        }
    }
    cout<<"No\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/