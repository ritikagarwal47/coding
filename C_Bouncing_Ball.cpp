#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,p,k;cin>>N>>p>>k;
    string s;cin>>s;
    ll x,y;cin>>x>>y;
    //ll mn=0;
    ll ans = LLONG_MAX;
    //ll a=1;
    for(ll i=0;i<N;++i)
    {
        ll mn=y*i;
        //ll a=1;
        for(ll j=i;j<N;j+=k)// a*k,++a)
        {
            if(s[j]!='1')
            {
                mn += x;
            }
            //cout<< 
            //else 
        }
        ans = min(ans,mn);
    }  
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/