#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
int B[50000+5];
bool fun(ll *A,ll N,ll K)
{
    if(A[K]==0)return true;
    if(B[K]==1)return false;
    B[K]=1;
    if(K+A[K]<N and K-A[K] >=0)return fun(A,N,K+A[K])||fun(A,N,K-A[K]);
    if(K+A[K]<N)return fun(A,N,K+A[K]);
    if(K-A[K] >=0)return fun(A,N,K-A[K]);
    return false;
}
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll K;cin>>K;
    memset(B,0,sizeof(B));
    fun(A,N,K)? cout<< "true" <<'\n' : cout<< "false" <<'\n';
} 
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;    //    cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/