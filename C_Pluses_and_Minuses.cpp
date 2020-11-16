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
    cout<<abs(p-m) <<'\n';
    ll pre[N]={0};
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
        cout<<pre[i]<<' ';    
    }
    cout<<'\n';
    for(ll i=0;i<100000;++i)
    {
        ll curr=i;
        bool ok = true;
        for(ll j=0;s[j];++j)
        {
            ++ans;
            if(s[j]=='+')++curr;
            else --curr;
            cout<<ans<<' '<<curr<<'\n';
            if(curr<0){ok=false;break;}
        }
        cout<<i<<'\n';
        if(ok){
        cout<<i<<' ';
        break;}
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/