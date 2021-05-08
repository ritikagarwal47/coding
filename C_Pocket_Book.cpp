#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll factorial(ll N)
{
    if(N<=1)return 1;
    return (N*factorial(N-1))%mod;
}
void solve()
{
    ll N,M;cin>>N>>M;
    //ll fact = factorial(N-1);   cout<<fact<<'\n';
    ll c=0;string A[N];
    ll ans=1;
    for(ll i=0;i<N;++i)cin>>A[i];
    for(ll i=0;i<M;++i)
    {
        set<char> st;
        for(ll j=0;j<N;++j)
        {
            st.insert(A[j][i]);
            // for(ll k=0;k<M;++k)
            // {
            //     if(A[i][k]!=A[j][k])++c;
            //     //cout<<A[i][k]<<' '<<A[j][k]<<' '<<c<<'\n';
            // }
        }
        //cout<<st.size()<<'\n';
        ans*=st.size();ans%=mod;
    } 
    //cout<<c<<'\n';
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/