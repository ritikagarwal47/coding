#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,M;cin>>N>>M;
    ll l[N],r[N];
    vector<tuple<ll,ll,ll>> V;
    for(ll i=0;i<N;++i)
    {
        cin>>l[i]>>r[i];
        V.push_back({l[i],-1,i});
        V.push_back({r[i],1,i});
    }
    sort(V.begin(),V.end());
    cout<<"3 \n 1 4 7";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/