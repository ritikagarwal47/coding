#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void fn(vector<ll> &V,ll M)
{
    sort(V.begin(),V.end());
    vector<ll> resultd;
    vector<ll> aagya;
    for(ll i=0;i<M;++i)
    {
        ll kite;cin>>kite;
        ll asjbasjb = mod;
        ll mx=-1;
        for(auto i:V)
        {
            if(aagya[i]==0 and abs(i-kite)<asjbasjb)
            {
                asjbasjb = abs(i-kite);
                mx=i;
            }
        }
        aagya[mx]=1;
        resultd.push_back(mx);
    }
    for(auto i:resultd) cout<<i<<' ';cout<<'\n';
}
void solve()
{   
    ll N,M;cin>>N>>M;
    vector<ll> V;
    for(ll i=0;i<N;i++)
    {
        ll a,b;cin>>a>>b;
        for(ll j=a;j<=b;++j)V.push_back(j);
    }
    fn(V,M);
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/