#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll A[2*100000 + 5],B[2*100000 + 5];
ll a=0,b=0,N,M;
ll valid(ll d)
{
    a=0;b=0;
    for(ll i=0;i<N;++i)
    {
        if(A[i]<=d)a+=2;
        else a+=3;
    }
    for(ll i=0;i<M;++i)
    {
        if(B[i]<=d)b+=2;
        else b+=3;
    }
    return (a-b);
}
void solve()
{
    //ll mx=0;
    ll c;vector<pair<ll,ll>> V;
    cin>>N;for(ll i=0;i<N;++i)cin>>c,V.push_back({c,0});//,mx=max(mx,A[i]);
    cin>>M;for(ll i=0;i<M;++i)cin>>c,V.push_back({c,1});//,mx=max(mx,B[i]);
    ll l=3*N,h=3*M,ans=0,x=l,y=h;
    sort(V.begin(),V.end());
    for(ll i=0;i<V.size();++i)
    {
        if(V[i].second)--h;
        else --l;
        if((l-h)>(x-y))x=l,y=h;
    }
    // while(l<=h)
    // {
    //     ll m = (l+h)>>1;
    //     ll p=valid(m);
    //     cout<<p<<' '<<m<<' '<<a<<' '<<b<<'\n';
    //     if(p>=ans)
    //     {
    //         ans=p;l=m+1;
    //         x=a;y=b;
    //     }
    //     else h=m-1;
    // }
    cout<<x<<":"<<y;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/