#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
// ll fun(vector<ll> A,ll N)
// {
//     ll p = N;
//     N = A.size();
//     vector<ll> pre(N,0);
//     for(ll i=0;i<N;++i)
//     {
//         pre[i] = p + 1 - A[i];
//     }
//     for(ll i=N-2;i>=0;--i)
//     {
//         pre[i] = pre[i] + pre[i+1];
//     }
//     ll ans=0;
//     for(ll i=0;i<N;++i)
//     {
//         if((i+1)<N)
//         {
//             ans+= pre[i+1]*A[i];
//         }
//     }
//     return ans;
// }

void solve()
{
    ll N;cin>>N;
    ll x;
    //ll A[N];
    map<ll,vector<ll>> M;
    for(ll i=1;i<=N;++i)
    {
        cin>>x;M[x].push_back(i);
    }    
    ll ans=0;
    for(auto A:M)
    {
        ll M = A.second.size();
        ll pre[M];
        pre[M-1] = N - A.second.back()+1; 
        for(ll i=M-2;i>=0;--i)
        {
            pre[i] = pre[i+1] + (N-A.second[i] + 1);
        }
        //for(auto i:pre)cout<<i<<' ';cout<<'\n';
        for(ll i=0;i<M-1;++i)
        {
            ans+= (A.second[i])*(pre[i+1]);///cout<<ans<<' ';
        }
        
    }
    
    // for(ll i=0;i<N;++i)
    // {
    //     M[A[i]].push_back(i+1);
    // }  
    // ll ans=0;
    // for(auto i:M)
    // {
    //     ans+= fun(i.second,N);
    // }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/