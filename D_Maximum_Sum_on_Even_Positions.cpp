#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N];
    ll ans=0,local=0;
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];
        if(i%2==0)
        {
            ans+=A[i];
        }
    }
    ll global=0;
    for(ll i=1;i<N;i+=2)
    {
        local += A[i] - A[i-1];
        if(local<0)local = 0;
        global = max(local,global);
    }
    local=0;
    for(ll i=1;i<N-1;i+=2)
    {
        local += A[i] - A[i+1];
        if(local<0)local =0;
        global = max(local,global);
    }
    cout<< ans + global <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/