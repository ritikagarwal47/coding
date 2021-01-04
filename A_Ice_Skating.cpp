#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll dsu[10000+4];
ll find(ll N)
{
    if(dsu[N]<0)return N;
    ll x = find(dsu[N]);
    dsu[N] = x;
    return x;
}
void merge(ll a,ll b)
{
    a = find(a);
    b = find(b);
    if(a!=b)dsu[a]=b;
}
void solve()
{
    ll N;cin>>N;
    //vector<ll> adj[N];
    ll A[N],B[N]; for(ll i=0;i<N;++i)cin>>A[i]>>B[i];
    for(ll i=0;i<=N;++i)dsu[i]=-1;
    for(ll i=0;i<N;++i)
    {
        for(ll j=i+1;j<N;++j)
        {
            if(A[i]==A[j] or B[i]==B[j])
            {
                merge(i,j);
            }
        }
    }
    ll ans=-1;
    for(ll i=0;i<N;++i)
    {
        if(dsu[i]<0)++ans;
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/