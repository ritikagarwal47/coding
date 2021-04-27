#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<ll> ans;
void fun(vector<ll> &V,ll l,ll r,ll i,ll N,ll pre=0)
{
    if(i==N and l!=r)
    {
        cout<<"YES\n";
        for(auto j :ans)cout<<j<<' ';exit(0);
        //return;
    }
    if(i==N)return;
    for(auto j :V)
    {
        if(j==pre)continue;
        ans.push_back(j);
        if((l+j)>r and i&1)fun(V,l+j,r,i+1,N,j);
        if(l<(r+j) and i%2==0)fun(V,l,r+j,i+1,N,j);
        ans.pop_back();
    }
}
void solve()
{
    string s;cin>>s;
    ll N;cin>>N;
    vector<ll> V;
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='1')V.push_back(i+1);
    }  
    // if(V.size()<=1 and N!=1)
    // {
    //     cout<<"NO\n";return;
    // }
    fun(V,0,0,0,N);
    cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/