#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;ll mx=0;
    map<ll,ll> M;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i],mx=max(mx,A[i]),++M[A[i]];
    ll mx1=-1;
    for(ll i=0;i<N;++i)
    {
        if(mx%A[i])mx1=max(mx1,A[i]);
    }
    if(mx1!=-1)
    {
        cout<<mx<<' '<<mx1<<'\n';return;
    }
    for(auto i : M)
    {
        if(i.second==2)mx1=max(mx1,i.first);
    }
    cout<< mx<<' '<<mx1<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/