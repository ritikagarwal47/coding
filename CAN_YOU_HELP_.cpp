#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,K;cin>>N>>K;
    if(N==1)
    {
        if(K==0)cout<<"0 Null\n";
        else cout<<K<<" Loss\n";
        return;
    }
    if(N&1)
    {
        ll o = N/2+1;
        ll e = N/2;
        o = o*(o-1)/2;
        e = e*(e-1)/2;
        ll  p = (e+o)*2;
        if(p==K)cout<<"0 Null\n";
        else if(p>K)cout<<p-K<<" Profit\n";
        else cout<< K-p<<" Loss\n";
    }
    else
    {
        ll o = N/2;
        ll e = N/2;
        o = o*(o-1)/2;
        e = e*(e-1)/2;
        ll  p = (e+o)*2;
        if(p==K)cout<<"0 Null\n";
        else if(p>K)cout<<p-K<<" Profit\n";
        else cout<< K-p<<" Loss\n";
    }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/