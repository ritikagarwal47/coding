#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll factor(ll N)
{
    if(N==1)return 1;
    ll ans=0;
    for(ll i=1;i*i<=N;++i)
    {
        if(i*i==N)cout<<i<<' ';
        else if(N%i==0)
        {
            cout<<i<<' '<< N/i << ' ';
        }
    }
    return ans;
}
void solve()
{
    ll N;cin>>N;
    ll ans=0;
        ans += factor(8);
        cout<<'\n';
        ans+= factor(3);
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/