#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll x;ll A[N];
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        if(x==1)
        {
            A[i] = -1;ans++;
        }
        else A[i]=1;
    }
    ll local , global;
    local = global = A[0];
    for(ll i=1;i<N;++i)
    {
        local = max(A[i],local + A[i]);
        global = max(global,local);
    }
    cout<< ans +  global <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/