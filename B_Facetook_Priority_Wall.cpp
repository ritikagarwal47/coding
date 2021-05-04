#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    ll N;cin>>N;
    map<string,ll> M;
    for(ll i=0;i<N;++i)
    {
        string n1,a,b,n2,d;cin>>n1>>a;
        ll c=0;
        if(a=="posted" or a=="commented")cin>>b;
        cin>>n2>>d;
        n2=n2.substr(0,n2.length()-2);
        if(a=="posted")c=15;
        else if(a=="commented")c=10;
        else c=5;
        if(n1==s)M[n2]+=c;
        else if(n2==s)M[n1]+=c;
        else M[n1]+= 0LL,M[n2]+= 0LL;
    }
    vector<pair<ll,string>> V;
    for(auto i : M)V.push_back({-i.second,i.first});
    sort(V.begin(),V.end());//,greater<pair<ll,string>>());
    //reverse(V.begin(),V.end());
    for(ll i=0;i<V.size();++i)cout<<V[i].second<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/