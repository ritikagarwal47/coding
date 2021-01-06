#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll K;cin>>K;
    //int A[K+K][K];
    for(ll i=0;i<=K;++i)
    {
        for(ll j=0;j<=i;++j)
        {
            if(i>j)cout<<'*';
            else cout<<j;
        }
        cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/