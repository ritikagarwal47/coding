#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll tree[4*(1<<17) + 1];
ll A[4*(1<<17) + 1];
bool level[4*(1<<17) + 1];
void build(ll l,ll h,ll i)
{
    if(l==h)
    {
        level[i]=true;
        tree[i]=A[h];return;
    }
    ll m = (l + h)/2; 
    build(l,m,2*i + 1);
    build(m+1,h,2*i + 2);
    level[i] = !level[2*i + 1];
    if(!level[i])tree[i] = tree[2*i+1] | tree[2*i + 2];
    else tree[i] = tree[2*i+1] ^ tree[2*i + 2];
}
void update(ll l,ll h,ll i,ll a,ll b)
{
    if(l==h and l==a)
    {
        tree[i] = b;return;
    }
    if(l>a or h<a)return;
    if(l==h)return;
    ll m = (l+h)/2;
    update(l,m,2*i+1,a,b);
    update(m+1,h,2*i+2,a,b);
    if(!level[i])tree[i] = tree[2*i+1] | tree[2*i + 2];
    else tree[i] = tree[2*i+1] ^ tree[2*i + 2];
}
void solve()
{
    ll N,M;cin>>N>>M;N = (1<<N);
    for(ll i=0;i<N;++i)cin>>A[i];
    build(0,N-1,0);
    //cout<<tree[0]<<' ';
    //for(ll i=1;i<(1<<N);++i)cout<<tree[i]<<' ';cout<<'\n';
    while(M--)
    {
        ll a,b;cin>>a>>b;--a;
        //A[a]=b;
        update(0,N-1,0,a,b);
        cout<<tree[0]<<'\n';
    }  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/