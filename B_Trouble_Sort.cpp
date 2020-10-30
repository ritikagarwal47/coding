#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    //ll A[N],B[N],C[N];
    vector<ll>A,B,C;
    ll x;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        A.push_back(x);C.push_back(x);
    }
    ll a=0,b=0;
    for(ll i=0;i<N;++i)
    {
        cin>>x;B.push_back(x);
        if(B[i]==1)a=1;
        if(B[i]==0)b=1;
    }
    sort(C.begin(),C.end());
    // for(ll i=0;i<N;++i)
    // {
    //     for(ll j=i+1;j<N;++j)
    //     {
    //         if(A[i]>A[j] and B[i]!=B[j])
    //         {
    //             swap(A[i],A[j]);
    //             swap(B[i],B[j]);
    //         }
    //     }
    // }
    if(A==C or (a==1 and b==1))cout<<"Yes\n";
    else cout<<"No\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/