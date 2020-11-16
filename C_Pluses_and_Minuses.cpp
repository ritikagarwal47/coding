#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    ll ans=0,N = s.size();
    ll p=0,m=0;
    for(ll i=0;i<N;++i)
    {
        if(s[i]=='+')++p;
        else ++m;
    }
    //cout<<abs(p-m) <<'\n';
    ll pre[N]={0};
    bool ok = true;
    ll x=0,mn=100000;
    for(ll i=0;i<N;++i)
    {
        if(i==0)
        {
            if(s[i]=='-')pre[i]=-1;
            else pre[i]=1;
        }
        else
        {
            if(s[i]=='-')pre[i] = pre[i-1] - 1;
            else pre[i] = pre[i-1] + 1;
        }  
        if(pre[i]<0)ok=false;  
        if(mn>pre[i])
        {
            mn=pre[i];x=i;
        }
        //cout<<pre[i]<<' ';    
    }
    if(ok){cout<<N<<'\n';return;}
    //cout<<'\n';
    ll a=0;
    for(ll i=0;i<=x;++i)
    {
        if((pre[i]+a)<0)
        {
            ans += i+1;
            ++a;
        }
    }
    cout<< ans + N <<'\n';
    // for(ll i=0;i<100000;++i)
    // {
    //     ll curr=i;
    //     bool ok = true;
    //     for(ll j=0;s[j];++j)
    //     {
    //         ++ans;
    //         if(s[j]=='+')++curr;
    //         else --curr;
    //         cout<<ans<<' '<<curr<<'\n';
    //         if(curr<0){ok=false;break;}
    //     }
    //     cout<<i<<'\n';
    //     if(ok){
    //     cout<<i<<' ';
    //     break;}
    // }
    // cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/