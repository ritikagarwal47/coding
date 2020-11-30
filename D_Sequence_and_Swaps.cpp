#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,x;cin>>N>>x;
    ll A[N],B[N]; for(ll i=0;i<N;++i)cin>>A[i],B[i]=A[i];
    if(A==B)
    {
        cout<<"0\n";return;
    }
    ll ans=0;
    ll p =0;
    for(p=N-1;p>0;--p)
    {
        if(A[p]<A[p-1])break;
    }
    for(ll i=0;i<p;++i)
    {
        if(A[i]>x)swap(A[i],x),++ans;
    }
    if(is_sorted(A,A+N))cout<< ans<<'\n';
    else cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/