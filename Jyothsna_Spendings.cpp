#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool cmp(pair<ll,string> a,pair<ll,string> b)
{
    if(a.first==b.first)
    {
        return a.second<b.second;
    }
    return a.first>b.first;
}
void solve()
{
    ll N;cin>>N;
    vector<pair<string,ll>> V;
    ll mx1=0,mx2=0,mx3=0;
    for(ll i=0;i<N;++i)
    {
        string a;ll b;cin>>a>>b;
        V.push_back({a,b});
        if(b>mx3)
        {
            mx1=mx2;
            mx2=mx3;
            mx3=b;
        }
        else if(b>mx2 and b<mx3)
        {
            mx1 = mx2;
            mx2 = b;
        }
        else if(b>mx1 and b<mx2 and b<mx3)
        {
            mx1=b;
        }
    }  
    map<string,ll> M;
    for(auto i :V)
    {
        if(i.second == mx1 or i.second==mx2 or i.second==mx3)M[i.first]+=i.second;
    }
    vector<pair<ll,string>> A;
    for(auto i:M)
    {
        A.push_back({i.second,i.first});
    }
    sort(A.begin(),A.end(),cmp);
    //for(auto i:A)cout<<i.first<<' '<<i.second<<'\n';
    cout<<A[0].second<<' '<<A[0].first<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/