#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll A[3002]={0};
    ll N;cin>>N;ll x;
    for(ll i=0;i<N;++i)cin>>x,A[x]++;
    for(ll i=1;i<=3001;++i)if(A[i]==0){cout<<i;return;}
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/