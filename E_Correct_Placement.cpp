#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool comp(pair<ll,ll> a,pair<ll,ll> b)
{
    ll h1=a.first,h2=b.first;
    ll w1=a.second,w2=b.second;
    if(h2<h1 and w2<w1) return true;
    if(w2<h1 and h2<w1) return true;
    return false;
}
void solve()
{
    ll N;cin>>N;
    //ll A[N],B[N]; 
    vector<pair<ll,ll>> A,B;
    for(ll i=0;i<N;++i)
    {
        ll x,y;cin>>x>>y;
        A.push_back({x,y});
        B.push_back({x,y});
    }
    sort(A.begin(),A.end());
    ll x = A[0].first;
    ll y = A[0].second;
    ll a=0;
    for(ll i=0;i<N;++i)
    {
        if(B[i].first==x and B[i].second==y )a=i+1;
    }
    for(ll i=0;i<N;++i)
    {
        if(B[i].first>x and B[i].second>y)
        {
            cout<< a<<' ';
        }
        else cout<<"-1 ";
    }
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/