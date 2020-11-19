#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll A[10][10];
ll N,K;
ll ans=0;
// void fun(ll i,ll c,ll val)
// {
//     if(c==N)
//     {
//         if((A[i][0]+val)==K)++ans;
//         return ;
//     }
//     for(ll j=0;j<N)
// }
void solve()
{
    cin>>N>>K;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<N;++j)cin>>A[i][j];
    }
    //fun(0,c,0);
    ll C[N-1];
    for(ll i=0;i<N-1;++i)C[i]=i+1;
    //for(ll i=0;i<N-1;++i)cout<<C[i];
    do
    {
        ll l=0;
        ll curr=0;
        for(ll i=0;i<N-1;++i)
        {
            curr += A[l][C[i]];
            l = C[i];
        }
        curr+= A[l][0];
        if(curr==K)++ans;
    } while (next_permutation(C,C+N-1));
    
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/