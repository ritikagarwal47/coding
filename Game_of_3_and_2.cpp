#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll st(ll N,ll d)
{
    ll ans=0;
    
    while(N%d==0)N/=d,++ans;
    return ans;
}
bool cmp(ll &a,ll &b)
{
    ll c1=st(a,3);
    ll c2=st(b,3);
    if(c1==c2)
    {
        ll d1 = st(a,2);
        ll d2 = st(b,2);
        return d1<d2;
    }
    return c1>c2;
}
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N,cmp);
    for(ll i=0;i<N;++i)cout<<A[i]<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/