#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll N;string s;
ll dp[5000+3][5000+3];
ll px[5000+3];
ll  fun(ll j,ll pre,ll a)
{
    if(j==N-1)
    {
        //cout<<a<<' ';
        return 1;
    }
    if(dp[j][pre]!=-1)return dp[j][pre];
    char ch = s[j];
    ll c=0;
    if(ch=='=')c = fun(j+1,pre,a*10 + pre);
    else if(ch=='<')
    {
        for(ll i=max(pre+1,px[j]);i<=N;++i)
        {
            c+= fun(j+1,i,a*10 + i);
            c%=mod;
        }
    }
    else 
    {
        for(ll i=1;i<pre;++i)
        {
            c+= fun(j+1,i,a*10 + i);
            c%=mod;
        }
    }
    return dp[j][pre] = c%mod;
}
void solve()
{
    cin>>N>>s;
    set<char> st;
    for(auto i:s)st.insert(i);
    if(st.size()==1)
    {
        if(*st.begin()=='=')cout<<N<<'\n';
        else cout<<"1\n";
        return;
    }
    s+="#";
    px[N]=0;
    for(ll i=N-1;i>=0;--i)
    {
        if(s[i]==s[i+1])px[i] = px[i+1] + 1;
        else px[i] = 1;
    }
    //for(ll i=0;i<=N;++i)cout<<px[i]<<' ';cout<<'\n';
    ll str=1;
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='>')str=i+1;
        else break;
    }
    //cout<<str<<"ppr\n";
    for(ll i=0;i<=N;++i)
    {
        for(ll j=0;j<=N;++j)dp[i][j]=-1;
    }
    ll ans=0;
    ll l=-1;
    for(ll i=str;i<=N;++i)
    {
        ll p = fun(0,i,i);        
        //if(p==0 and l==0)break;
        ans+=p;
        //cout<<"\n p"<<p<<' '<<i<< "p \n";
        ans%=mod;
        l=p;
    }
    //cout<<(511920003)%mod <<'\n';
    // cout<<'\n';
    // for(ll i=0;i<=N;++i)
    // {
    //     for(ll j=0;j<=N;++j)cout<<dp[i][j]<<' ';cout<<'\n';
    // }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/