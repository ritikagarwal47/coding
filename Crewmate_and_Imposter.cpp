#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll fun(ll N)
{
    //vector<ll> V;
    ll ans=0;
    for(ll i=1;i*i<=N;++i)
    {
        if(i%3!=0)++ans;
    }
    return ans;
}
void solve()
{
    ll N;cin>>N;
    cout<< fun(N) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/