#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll a,b,x;cin>>a>>b>>x;
    //if(x==1)
    if(a>=b)
    {
    string ans="";
    if(x&1)
    {
        ll i=0;
        ll p = x/2;
        while(i<p)
        {
            ans += "10";
            --a;--b;++i;
        }
        for(i=0;i<b;++i)ans+="1";
        for(i=0;i<a;++i)ans+="0";
        
        cout<< ans<<'\n';
        return;
    }
    ll i=0;
    ll p = x/2;
    while(i<p)
    {
        ans += "01";
        --a;--b;++i;
    }
    for(i=0;i<b;++i)ans+="1";
    for(i=0;i<a;++i)ans+="0"; 
    cout<< ans <<'\n';  
    return ;
    }  
    string ans="";
    if(x&1)
    {
        ll i=0;
        ll p = x/2;
        while(i<p)
        {
            ans += "10";
            --a;--b;++i;
        }
        for(i=0;i<b;++i)ans+="1";
        for(i=0;i<a;++i)ans+="0";
        
        cout<< ans<<'\n';
        return;
    }
    ll i=0;
    ll p = x/2;
    while(i<p)
    {
        ans += "10";
        --a;--b;++i;
    }
    for(i=0;i<a;++i)ans+="0"; 
    for(i=0;i<b;++i)ans+="1";

    cout<< ans <<'\n';  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/