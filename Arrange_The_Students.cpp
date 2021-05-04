#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;ll N= s.size();
    ll c=0,ans=0,p=0;
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='1')++c,++p;
        else ans=max(ans,p),p=0;
    }  
    ans=max(ans,p);
    if(ans==c)
    {
        cout<<ans<<'\n';return;
    }
    ll left[N],right[N];
    memset(left,0,sizeof(left)); memset(right,0,sizeof(right));
    if(s[0]=='1')left[0]=1;
    if(s[N-1]=='1')right[0]=1;

    for(ll i=1;i<N;++i)
    {
        if(s[i]=='1')left[i] = left[i-1] + 1;
        else left[i] = 0;
    }
    for(ll i=N-1;i>=0;--i)
    {
        if(s[i]=='1')right[i] = right[i+1] + 1;
        else right[i] = 0;
    }
    for(ll i=1;i<N-1;++i)
    {
        if(s[i]=='0')
        {
            ll a = left[i-1] + right[i+1];
            ans = max(ans,a+1);
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/