#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,l,r;cin>>N>>l>>r;
    //vector<ll> A,B;
    map<ll,ll> A,B;
    ll x;
    if(l<r)
    {
    for(ll i=0;i<l;++i)
    {
        cin>>x;++A[x];
    }
    //sort(A.begin(),A.end());
    for(ll i=0;i<r;++i)
    {
        cin>>x;++B[x];
    }
    }
    else
    {
        for(ll i=0;i<l;++i)
        {
            cin>>x;++B[x];
        }
    //sort(A.begin(),A.end());
        for(ll i=0;i<r;++i)
        {
            cin>>x;++A[x];
        }
        swap(l,r);
    }
    //sort(B.begin(),B.end());
    
    ll mn=LONG_MAX,mx = LONG_MIN;
    for(ll i=1;i<=N;++i)
    {
        mn = min(A[i],B[i]);
        mx = max(A[i],B[i]);
        l-=mn;B[i]-=mn;r-=mn;
        //l-=mx;A[i]-=mx;r-=mx;
    }
    ll ans=0;
    //ll p = (abs(l-r))/2;
    for(ll i=1;i<=N;++i)
    {
        ll c  = min((r-l)/2,B[i]/2);
        ans+=c;r-=c*2;
       // cout<<ans<<' '<<r<<' '<<c<<'\n';
    }
    ans+=r;
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/