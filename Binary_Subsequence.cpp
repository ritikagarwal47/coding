#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    ll o=0,z=0;
    ll pre[N]={0},suff[N]={0};
    for(ll i=0;s[i];++i)
    {
        if(i==0)
        {
            if(s[i]=='0')pre[i]=1;
            continue;
        }
        if(s[i]=='0')
        {
            pre[i] = pre[i-1] +1 ;
        }
        else pre[i] = pre[i-1];
    }
    for(ll i=N-1;i>=0;--i)
    {
        if(i==N-1)
        {
            if(s[i]=='1')suff[i]=1;
            continue;
        }
        if(s[i]=='1')
        {
            suff[i] = suff[i+1] + 1 ;
        }
        else suff[i]=suff[i+1];
    }
    //cout<<o<<' ' <<z<<'\n';
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        ans=max(ans,pre[i] + suff[i]);
    }
    cout<<N - ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/