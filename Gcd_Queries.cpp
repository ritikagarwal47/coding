#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll gcd(ll a,ll b)
{
    if(a==0)return b;
    return gcd(b%a,a);
}
void pre(ll *l,ll *r,ll *A,ll N)
{
    ll g1=0,g2=0;ll j=N;
    l[0]=r[0]=0;
    for(ll i=1;i<=N;++i)
    {
        g1 = gcd(g1,A[i]);
        l[i]=g1;
        g2 = gcd(g2,A[j]);
        r[j--]=g2;
    }
}
void solve()
{
    ll N,Q;cin>>N>>Q;
    ll A[N+1];for(ll i=1;i<=N;++i)cin>>A[i];
    ll left[N+1],right[N+2];right[N+1]=0;
    pre(left,right,A,N);
    //for(auto i:left)cout<<i<<' ';cout<<'\n';
    //for(auto i:right)cout<<i<<' ';cout<<'\n';
    while(Q--)
    {
        ll a,b;cin>>a>>b;//--a;--b;
        //cout<<left[a-1]<<' '<<right[b+1]<<'\n';
        cout<<gcd(left[a-1],right[b+1])<<'\n';
    }  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/