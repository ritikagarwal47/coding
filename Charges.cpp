#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    string s;cin>>s;
    ll ans=0,l=0;
    for(ll i=1;i<N;++i)
    {
        if(s[i]==s[i-1])ans+=2;
        else ++ans;
    }   
    //cout<<ans<<'\n';
    for(ll i=0;i<K;++i)
    {
        ll x;cin>>x;--x;
        if(x-1>=0)
        {
            if(s[x]==s[x-1])ans-=2;
            else --ans;
        }
        if(x+1<N)
        {
            if(s[x]==s[x+1])ans-=2;
            else --ans;
        }
        if(s[x]=='0')s[x]='1';
        else s[x]='0';
        if(x-1>=0)
        {
            if(s[x]==s[x-1])ans+=2;
            else ++ans;
        }
        if(x+1<N)
        {
            if(s[x]==s[x+1])ans+=2;
            else ++ans;
        }
        cout<<ans<<"\n";
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/