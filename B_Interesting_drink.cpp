#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll dp[100000+5]={0};
void fun(ll *A,ll N)
{
    dp[0]=0;
    ll a=0;
    for(ll i=1;i<=100000;++i)
    {
        while(a<N and A[a]<=i)++a;
        dp[i] = a;
    }
}
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N);
    fun(A,N);
    ll Q;cin>>Q;
    while(Q--)
    {
        ll M;cin>>M;
        if(M>100000)cout<< N  <<'\n';
        else cout<< dp[M] <<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/