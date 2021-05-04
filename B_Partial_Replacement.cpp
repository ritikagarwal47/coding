#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    string s;cin>>s;
    bool ok=false;
    ll ans=0;
    ll last=-K;
    ll st=-K;
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='*')
        {
            s[i]='x';st=i;++ans;break;
        }
    }
    ll pos=N;
    bool ok2=true;
    for(ll i=N-1;i>=0;--i)
    {
        if(s[i]=='*')
        {
            ok2=false;
            s[i]='x';pos=i;++ans;break;
        }
    }
    if(ok2)
    {
        cout<<ans<<'\n';return;
    }
    // bool ok1=false;
    // for(ll i=st+1;i<st+K+1 and i<N;++i)
    // {
    //     if(s[i]=='*')ok=true,last=i;
    //     if(s[i]=='x')ok1=true;
    // }  
    //if(ok and !ok1)++ans;
    //cout<<ans<<'\n';
    last = st ;
    //cout<<ans<<'\n';
    //cout<<st<<' '<<pos<<'\n';
    ll lp=st;
    ll d=1;
    for(ll i=st+1;i<pos;++i) 
    {       
        if(s[i]=='*' or s[i]=='x')last=i;
        if(d==K)
        {
            ++ans;
            d=i-last;            
        }      
        ++d;  
        //cout<<ans<<' '<<i<<'\n';
        //if(s[i]=='*')last=i;
    }
    cout<<ans<<'\n';
    //cout<<"p\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/