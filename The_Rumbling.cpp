#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll  N;cin>>N;
    string s;cin>>s;
    ll x,y;cin>>x>>y;
    ll ans=LONG_MAX;
    ll wt[N+1],et[N+1];
    ll A[N],B[N];
    for(ll i=0;i<N;++i)
    {
        ll c=0;
        if(s[i]=='N')c = min(x,3*y);
        else if(s[i]=='S')c=min(3*x,y);
        else if(s[i]=='W')c = min(y+y,x+x);
        if(i==0)
        {
            et[i]=c;
        }
        else et[i] = et[i-1] + c;
        A[i]=c;
    }
    for(ll i=N-1;i>=0;--i)
    {
        ll c=0;
        if(s[i]=='N')c=min(y,x+x+x);
        else if(s[i]=='S')c=min(x,y+y+y);
        else if(s[i]=='E')c = min(y+y,x+x);
        if(i==N-1)
        {
            wt[i]=c;
        }
        else wt[i] = wt[i+1] + c;
        B[i]=c;
    }
    for(ll i=0;i<N;++i)
    {
        ans=min(ans,wt[i] + et[i]-A[i]);
        ans=min(ans,wt[i] + et[i]-B[i]);
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/