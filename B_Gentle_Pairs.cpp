#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    vector<pair<double,double>> A; 
    for(ll i=0;i<N;++i)
    {
        ll x,y;cin>>x>>y;
        A.push_back({x,y});
    }
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        for(ll j=i+1;j<N;++j)
        {
            double d = (A[j].second - A[i].second)/(A[j].first - A[i].first);
            if(d<=1 and d>=-1)++ans;
        }
    }
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/