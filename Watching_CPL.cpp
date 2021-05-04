#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll accepted(ll i,ll *A,ll N,ll sa,ll sb,ll K)
{
    if(sa>=K and sb>=K)return i;
    if(i==N)return LONG_MAX;
    if(sa>=K)return accepted(i+1,A,N,sa,sb+A[i],K);
    if(sb>=K)return accepted(i+1,A,N,sa+A[i],sb,K);
    return min(accepted(i+1,A,N,sa+A[i],sb,K),accepted(i+1,A,N,sa,sb+A[i],K));
}
void solve()
{
    ll N,K;cin>>N>>K;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N);//,greater<ll>());
    ll s=A[N-1];
    set<ll> st;//,ra;
    ll ans=-1;
    st.insert(s);
    for(ll i=N-2;i>=0;--i)
    {
        s+=A[i];
        set<ll> ra;
        for(ll k : st)
        {
            ra.insert(A[i]);ra.insert(k);ra.insert(k+A[i]);
            if((((k+A[i])>=K) and ((s-k-A[i])>=K)) or (((A[i])>=K) and ((s-A[i])>=K)))
            {
                ans = N - i; break;
            }
        }
        if(ans!=-1)break;
        st = ra;
    }    
    cout<< ans <<'\n';
    //ll ans = accepted(0,A,N,0,0,K);
    //if(ans==LONG_MAX)cout<<"-1\n";
    //else cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/