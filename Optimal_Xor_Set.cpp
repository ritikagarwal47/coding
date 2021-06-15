#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll ans;
vector<ll> res;
void fun(ll *A, ll N,ll K,ll c,ll i,ll cur,vector<ll>& V)
{
    if(i>N)return;
    if(c==K)
    {
        if(cur>=ans)
        {
            ans=cur;
            res=V;
        }
        return;
    }
    for(ll j=i;j<N;++j)
    {
        //ll p = cur ^ A[j];
        V.push_back(A[j]);
        fun(A,N,K,c+1,j+1,cur ^ A[j],V);
        V.pop_back();
    }
}
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N];ans=0;res.clear();
    for(ll i=0;i<N;++i)A[i]=i+1;
    vector<ll> V;
    fun(A,N,K,0,0,0,V); 
    //cout<<ans<<'\n';
    for(auto i:res)cout<<i<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/