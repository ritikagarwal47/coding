#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M; 
    ll x,y;vector<pair<ll,ll>> B;
    vector<ll> A(N+1);
    for(ll i=0;i<M;++i)
    {
        cin>>x>>y;B.push_back({x,y});
        //A[x]=y;
    }
    sort(B.begin(),B.end());
    for(ll i=0;i<M;++i)
    {
        ll x = B[i].first;
        ll y = B[i].second;
        A[x]=y;
    }
    //for(ll i=1;i<=N;++i)cout<<A[i]<<' ';cout<<endl;
    vector<ll> V(N+2);
    for(ll i=1;i<=N;++i)V[i]=0;
    ll ans=0,mx=A[1],curr=-1;
    //for(ll i=1;i<=N;++i)cout<<V[i]<<' ';cout<<endl;
    vector<ll> pre(N+1);
    ll l=A[1];
    for(ll i=1;i<=N;++i)
    {
        if(A[i]==0)pre[i]=l;
        else 
        {
            l=i;
            pre[i]=i;
        }
    }
    //ll a=0;
    //for(ll i=1;i<=N;++i)cout<<pre[i]<<' ';cout<<endl;
    for(ll i=1;i<=N;++i)
    {   
        if(i>curr)
        {
            if(mx>curr)
            {
                ++ans;
                curr=mx;
                ll a = pre[i];
                V[a] +=1;
                V[A[a]+1] -=1;
                //cout<<"pp"<<i<<"pp"<<a<<' '<<A[a]<<'\n';
            }
            else
            {
                cout<<"-1\n";return;
            }
        }
        mx = max(mx,A[i]);//cout<<mx<<"mx "<<ans<<"ans ";
        //for(ll i=1;i<=N;++i)cout<<V[i]<<' ';cout<<endl;
        //cout<<"pp\n";
    }
    //for(ll i=1;i<=N;++i)cout<<V[i]<<' ';cout<<endl;
    for(ll i=1;i<=N;++i)
    {
        V[i] += V[i-1];
    }
    ll s=0;
    for(ll i=1;i<=N;++i)s+=V[i];
    //for(ll i=1;i<=N;++i)cout<<V[i]<<' ';cout<<endl;
    //cout<<ans<<'\n';
    cout<<s<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/