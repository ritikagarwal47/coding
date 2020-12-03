#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    K= 5 - K;
    ll c=0,x;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        if(x<=K)++c;
    }
    cout<< c/3 <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/