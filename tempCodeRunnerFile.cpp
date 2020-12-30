#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    ll a=N;
    bool ok=true;
    for(ll i=0;i<N;++i)
    {
        if(K==0)
        {
            a=1;ok=false;
        }
        cout<<a<<' ';
        if(ok)--a;
        else ++a;
        --K;
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/