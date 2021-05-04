#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M,X;cin>>N>>M>>X;
    vector<pair<ll,ll>> ans;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> pq;
    ll x,s=0;
    ll res[N];
    for(ll i=0;i<N;++i)
    {
        cin>>x;ans.push_back({x,i});
        s+=x;
    }
    sort(ans.begin(),ans.end());//,greater<pair<ll,ll>>());
    //ll A[M+1]={0};
    s = (s+M-1)/M ;
    ll a=0;
    ll i=N-1;
    for(ll i=0;i<M;++i)pq.push({0,i+1});
    for(;i>=0;--i)
    {
        pair<ll,ll>  z = pq.top();pq.pop();
        res[ans[i].second] = z.second;
        z.first+= ans[i].first;
        pq.push(z);
    }
    // if(a==M)
    // {
    //     for(;i<N;++i)
    //     {
    //         A[M-1]+=ans[i].first;
    //         res[ans[i].second] = M;
    //     }
    // }
    ll mn = LONG_MAX,mx = LONG_MIN;
    for(ll i=0;i<M;++i)
    {
        pair<ll,ll>  z = pq.top();pq.pop();
        mn = min(mn,z.first);
        mx = max(mx,z.first);//A[i]);
    }
    if(abs(mn-mx)>X)
    {
        cout<<"NO\n";return;
    }
    cout<<"YES\n";
    for(auto i:res)cout<<i<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/