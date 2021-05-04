#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a1,b1,c1,a2,b2,c2,a3,b3,c3;
    cin>>a1>>b1>>c1;
    cin>>a2>>b2>>c2;
    cin>>a3>>b3>>c3;
    vector<tuple<ll,ll,ll>> V;
    V.push_back({a1,b1,c1});
    V.push_back({a2,b2,c2});
    V.push_back({a3,b3,c3});
    sort(V.begin(),V.end());
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/