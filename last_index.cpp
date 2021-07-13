#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll fun(ll *A,ll N,ll i,ll x,ll K)
{
    if(i==N)return x;
    if(A[i]==K)x=i;
    return fun(A,N,i+1,x,K);
}
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];  
    ll K;cin>>K;
    cout<< fun(A,N,0,-1,K) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/