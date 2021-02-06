#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
// void fun(ll *A,ll N,stack<ll> s)
// {
//     if()
// }
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    //stack<ll> st;
    ll a=0;
    //st.push(0);
    if(K>10000)
    {
        cout<<"-1\n";return;
    }
    while(1)
    {
        ll p=0;
        bool ok=true;
        for(ll i=0;i<N-1;++i)
        {
            
            if(A[i]<A[i+1])
            {
                ok=false;
                p=i;
                ++a;
                A[i]++;
                break;
            }
        }
        if(a>=K)
        {
            cout<<p+1<<'\n';return;
        }
        if(ok)break;
    }
    cout<<"-1\n";
    // for(ll i=0;i<N;++i)
    // {
    //     for(ll )
    //     // while(1)
    //     // {
    //     //     for(ll k=i-1;k>0;--k)
    //     //     {
    //     //         if(A[k]<=A[k-1])
    //     //         {
    //     //             a+= abs(A[k]-A[k-1]) + 1;
    //     //             A[k] = A[k-1] + 1; 
    //     //         }
    //     //         if(a>=K)
    //     //         {
    //     //             cout<<k<<'\n';return;
    //     //         }
    //     //     }
    //     //     if(A[i]==A[i-1])break;
    //     // }
    // }
    // cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/