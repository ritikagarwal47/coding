#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    ll dp1[N]={0},dp2[N]={0};
    for(ll i=0;i<s.size();++i)
    {
        if(s[i]=='K')dp1[i]=1;
        else dp2[i]=1;

        if(i){
        dp1[i]+=dp1[i-1];
        dp2[i]+=dp2[i-1];
        }
    }
    vector<pair<ll,ll>> V;
    map<pair<ll,ll>,ll> M;
    for(ll i=0;i<N;++i)
    {
        ll g = __gcd(dp1[i],dp2[i]);
        V.push_back({dp1[i]/g,dp2[i]/g});
        pair<ll,ll> p = V.back();
        ++M[p];
        cout<< M[p] <<' ';

    }
    
    // for(auto i:V)
    // {
    //     ++M[i];
    // }
    // for(auto i:M)
    // {
    //     cout<<(i.second+1)<<' ';
    // }
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/