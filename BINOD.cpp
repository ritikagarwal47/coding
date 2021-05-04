#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll binary(ll *A,ll l,ll h,ll K)
{
    ll m = l + (h-l)/2;
    if(l>=h)return m;
    if(A[m]<K)return binary(A,m+1,h,K);
    else return binary(A,l,m-1,K);
}
void solve()
{
    ll N,Q;cin>>N>>Q;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N);
    ll cf[N];
    cf[0] = A[0];
    for(ll i=1;i<N;++i)
    {
        cf[i] = cf[i-1] + A[i];
    }
    while (Q--)
    {
        ll x;cin>>x;
        //ll s=0;
        //ll i = binary(A,0,N-1,2*x);
        ll i = lower_bound(A,A+N,2*x) - A;
        if(i==0)cout<< cf[N-1] <<'\n';
        else cout<< cf[N-1] - cf[i-1] <<'\n';
    }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;     //   cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/