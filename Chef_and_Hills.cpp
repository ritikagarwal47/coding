#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll s=0;
    ll A[N];  for(ll i=0;i<N;++i)cin>>A[i],s+=A[i];
    ll p = s/N;
    ll mn,mx;
    ll ans=LONG_MAX;
    if(M&1)
    {
        mn = p - M/2;
        mx = p + M/2;
        //mn=mx=35;
        //cout<<mn<<' '<<mx<<'\n';
        ll ans1=0;
        for(ll i=0;i<N;++i)
        {
            ans1+= max(abs(A[i]-mn),abs(A[i]-mx));
        }
        ++mn;++mx;
        ll ans2=0;
        for(ll i=0;i<N;++i)
        {
            ans2+= max(abs(A[i]-mn),abs(A[i]-mx));
        }
        //cout<<ans1<<' '<<ans2<<'\n';
        ans=min(ans,min(ans1,ans2));//<<'\n';
        //return;
    }
    else{
    // {
        
    // }
    //mn = 1;mx=6;
    //cout<<mn<<' '<<mx<<'\n';
    mn = p - (M-1)/2;
    mx = p + (M-1)/2;
    ll ans1=0,ans2=0;++mx;
    //cout<<mn<<' '<<mx<<'\n';
    for(ll i=0;i<N;++i)
    {
        ans1+= max(abs(A[i]-mn),abs(A[i]-mx));
    }
    --mx;--mn;
    //cout<<mn<<' '<<mx<<'\n';
    for(ll i=0;i<N;++i)
    {
        ans2+= max(abs(A[i]-mn),abs(A[i]-mx));
    }
    //cout<<ans1<<' '<<ans2<<'\n';
    //cout<<min(ans1,ans2)<<'\n';
    ans=min(ans,min(ans1,ans2));
    }
    ++p;
    if(M&1)
    {
        mn = p - M/2;
        mx = p + M/2;
        //mn=mx=35;
        //cout<<mn<<' '<<mx<<'\n';
        ll ans1=0;
        for(ll i=0;i<N;++i)
        {
            ans1+= max(abs(A[i]-mn),abs(A[i]-mx));
        }
        ++mn;++mx;
        ll ans2=0;
        for(ll i=0;i<N;++i)
        {
            ans2+= max(abs(A[i]-mn),abs(A[i]-mx));
        }
        //cout<<ans1<<' '<<ans2<<'\n';
        ans=min(ans,min(ans1,ans2));//<<'\n';
        //return;
    }
    else{
    // {
        
    // }
    //mn = 1;mx=6;
    //cout<<mn<<' '<<mx<<'\n';
    mn = p - (M-1)/2;
    mx = p + (M-1)/2;
    ll ans1=0,ans2=0;++mx;
    //cout<<mn<<' '<<mx<<'\n';
    for(ll i=0;i<N;++i)
    {
        ans1+= max(abs(A[i]-mn),abs(A[i]-mx));
    }
    --mx;--mn;
    //cout<<mn<<' '<<mx<<'\n';
    for(ll i=0;i<N;++i)
    {
        ans2+= max(abs(A[i]-mn),abs(A[i]-mx));
    }
    //cout<<ans1<<' '<<ans2<<'\n';
    //cout<<min(ans1,ans2)<<'\n';
    ans=min(ans,min(ans1,ans2));
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/