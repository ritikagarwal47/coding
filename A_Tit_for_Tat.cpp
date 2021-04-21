#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];

    for(ll i=0;i<N-1;++i)
    {
        if(A[i]<=K)
        {
            A[N-1]+=A[i];
            K-=A[i];
            A[i]=0;
            
        }
        else
        {
            A[N-1]+=K;
            A[i]-=K;
            K=0;
        }
        if(K==0)break;
    } 
    for(auto i:A)cout<<i<<' ';cout<<'\n'; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/