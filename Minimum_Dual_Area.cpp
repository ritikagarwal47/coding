#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    vector<pair<ll,ll>> V1,V2;
    ll mx=0,my=0;
    ll mnx = LLONG_MAX,mny=LLONG_MAX;
    for(ll i=0;i<N;++i)
    {
        ll x,y;cin>>x>>y;//cout<<x<<' '<<y<<'\n';
        mx=max(mx,x);mnx=min(mnx,x);
        my=max(my,y);mny=min(mny,y);
        V1.push_back({x,y});
        V2.push_back({y,x});
    }  
    if(N<=4)
    {
        cout<<"0\n";return;
    }
    //ll x = (mx-)
    ll p = (mx-mnx)*(my-mny);//cout<<p<<'\n';
    //cout<<mx<<' '<<mnx<<' '<<my<<' '<<mny<<'\n';
    sort(V1.begin(),V1.end());sort(V2.begin(),V2.end());
    //for(auto i:V1)cout<<i.first<<' '<<i.second<<'\n';
    //for(auto i:V2)cout<<i.first<<' '<<i.second<<'\n';
    ll dp1[N][2];
    ll c=LLONG_MAX ,d=0;//V1[N-1].second;
    for(ll i=N-1;i>=0;--i)
    {
        c=min(c,V1[i].second);
        d=max(d,V1[i].second);
        dp1[i][0] = c;
        dp1[i][1] = d;
    }
    ll dp2[N][2];
    c=LLONG_MAX;d=0;//V1[N-1].second;
    for(ll i=N-1;i>=0;--i)
    {
        c=min(c,V2[i].second);
        d=max(d,V2[i].second);
        dp2[i][0] = c;
        dp2[i][1] = d;
    }
    ll ans=LLONG_MAX;c=LLONG_MAX;d=0;
    c=min(c,V1[0].second);
    d=max(d,V1[0].second);
    for(ll i=1;i<N;++i)
    {
        
        //ll a = (V1[i]-V1[i-1])*(my - mny);
        //ll a = (d - c)*(V2[i-1].first - mny) + (dp2[i][1] - dp2[i][0])*(my - V2[i].first) ;
        ll a = (d - c)*(V1[i-1].first - mnx) + (dp1[i][1] - dp1[i][0])*(mx - V1[i].first) ;
        // cout<< d <<' '<<c<< ' '<<mnx<<' '<<V1[i-1].first<<" pp ";
        // cout<<dp1[i][0]<<' '<<dp1[i][1]<<' '<<V1[i].first<<' '<<mx <<" pp ";
        // cout<<  (d - c)*(V2[i-1].first - mny) <<' '<<(dp2[i][1] - dp2[i][0])*(my - V2[i].first)<<' ';
        //cout<< (d - c)*(V1[i-1].first - mnx) <<' '<< (dp1[i][1] - dp1[i][0])*(mx - V1[i].first)<<' ';
        ans=min(ans,a);//cout<<a<<'\n';
        c=min(c,V1[i].second);
        d=max(d,V1[i].second);
    }
    c=LLONG_MAX;d=0;
    c=min(c,V2[0].second);
    d=max(d,V2[0].second);
    for(ll i=1;i<N;++i)
    {
        
        //ll a = (V2[i]-V2[i-1])*(mx - mnx);
        ll a = (d - c)*(V2[i-1].first - mny) + (dp2[i][1] - dp2[i][0])*(my - V2[i].first) ;
        // cout<< d <<' '<<c<< ' '<<mny<<' '<<V2[i-1].first<<" pp ";
        // cout<<dp2[i][0]<<' '<<dp2[i][1]<<' '<<V2[i].first<<' '<<my <<" pp ";
        // cout<<  (d - c)*(V2[i-1].first - mny) <<' '<<(dp2[i][1] - dp2[i][0])*(my - V2[i].first)<<' ';
        ans=min(ans, a);//cout<<a<<'\n';
        c=min(c,V2[i].second);
        d=max(d,V2[i].second);
    }
    cout<<ans<<'\n';
    //cout<<p<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/