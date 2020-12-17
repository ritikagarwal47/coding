#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll K;cin>>K;
    bool f=true;
    for(ll i=0;i<K;++i)
    {
        for(ll j=0;j<K-i-1;++j)cout<<' ';
        if(f)
        {
            char ch = 'A';
            for(ll j=0;j<i+1;++j)cout<< ch++;
            f=!f;
        }
        else
        {
            ll a=1;
            for(ll j=0;j<i+1;++j)cout<<a++;
            f=!f;
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