#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll x,y;
    if(N==1 )
    {
        cin>>x>>x;cout<<"1\n";return;
    }
    else if(N==2)
    {
        cin>>x>>x>>x>>x;cout<<"2\n";return;
    }
    vector<pair<ll,ll>> A(N);
    ll ans=2;
    for(ll i=0;i<N;++i)cin>>x>>y,A[i].first=x,A[i].second=y;
    for(ll i=1;i<N-1;++i)
    {
        ll p = A[i].first - A[i].second;
        ll q = A[i].first +  A[i].second;
        if(p>A[i-1].first)
        {
            ++ans; 
            //A[i-1].first=p;
        }
        else if(q<A[i+1].first)
        {
            ++ans;
            A[i].first = q;
        }
        //cout<< A[i].first <<' '<<A[i].second<<'\n';
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/