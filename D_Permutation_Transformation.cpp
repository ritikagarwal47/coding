#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll A[101]={0},ans[101]={0};
void depth(ll l,ll r,ll dep)
{
    if(r<l)return;
    if(l==r)
    {
        ans[A[l]]=dep;return;
    }
    ll p = l;
    for(ll i=l;i<=r;++i)
    {
        if(A[i]>A[p])p=i;
    }
    ans[A[p]] = dep;
    depth(l,p-1,dep+1);depth(p+1,r,dep+1);
}
void solve()
{
    ll N;cin>>N;
    for(ll i=0;i<N;++i)cin>>A[i];
    depth(0,N-1,0);
    for(ll i=0;i<N;++i)cout<<ans[A[i]]<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/