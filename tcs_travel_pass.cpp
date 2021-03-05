#include<bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll A[5],B[5];
void solve()
{
    for(ll i=0;i<5;++i)cin>>A[i];
    for(ll i=0;i<5;++i)cin>>B[i];
    ll N;cin>>N;
    vector<ll> days;
    ll p=1;
    for(ll i=0;i<N;++i)
    {
        string s;cin>>s;
        ll z = s.size();
        for(ll j=0;j<z;++j)
        {
            if(s[j]=='X')days.push_back(p);
            ++p;
        }
    }
    //for(auto i : days)cout<<i<<' ';cout<<'\n';
    ll M = days.size();
    if(M==0)
    {
        cout<<"0\n";return;
    }
    ll dp[70000+7]={0};
    ll a,b,c,d,e;
    unordered_set<ll>  st;
    for(ll i=0;i<M;++i)
    {
        st.insert(days[i]);
    }
    dp[days[0]] = min(B[0],min(B[1],min(B[2],min(B[3],B[4]))));
    for(ll i=days[0]+1;i<=days[M-1];++i)
    {
        if(!st.count(i))
        {
            dp[i] = dp[i-1]%mod;
        }
        else
        {
            a=max(i-A[0],0ULL);
            b=max(i-A[1],0ULL);
            c=max(i-A[2],0ULL);
            d=max(i-A[2],0ULL);
            e=max(i-A[4],0ULL);
            dp[i]=min(dp[a]+B[0],min(dp[b]+B[1],min(dp[c]+B[2],min(dp[d]+B[3],dp[e]+B[4]))))%mod;
        }
    }
    //for(auto i : dp)cout<<i<<' ';cout<<'\n';
    cout<< dp[days[M-1]]%mod<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/