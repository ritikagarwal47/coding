#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
//ll ans=LONG_MIN;
ll M,N;
ll ans=LONG_MAX;
void fun(vector<pair<ll,ll>> &A,ll i,ll s=0,ll mx=LONG_MIN,ll mn=LONG_MAX)
{
    if(i==N+1)return;
    if(s>=M)
    {
        ans=min(ans,mx-mn);return;
    }
    fun(A,i+1,s + A[i].second,max(mx,A[i].first),min(mn,A[i].first));
    fun(A,i+1,s,mx,mn);
}
void solve()
{
    cin>>M>>N;
    vector<pair<ll,ll>> V;
    ll x,y;ans=LONG_MAX;
    for(ll i=0;i<N;++i)
    {
        cin>>x>>y;V.push_back({x,y});
        //if(y>=M)ans=0;
    }
    sort(V.begin(),V.end());
    ll s=0,e=0;
    ll sm = V[0].second;
    while(s<N and e<N)
    {
        if(sm<M)
        {
            ++e;
            sm+=V[e].second;
        }
        else
        {
            ans = min(ans,V[e].first - V[s].first);
            sm -= V[s].second;
            s++;
            if(s>e)
            {
                ++e;
                sm = V[e].second;
            }
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