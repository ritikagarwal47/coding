 #include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool fun(map<ll,ll> M,ll p)
{
    ll ans=0;
    for(auto i : M)
    {
        if(i.first<p and i.second<M[p])++ans;
    }
    return ans==(p-1) ? false : true ;
}
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll B[N]; for(ll i=0;i<N;++i)cin>>B[i];
    map<ll,ll> M1,M2;
    for(ll i=0;i<N;++i)
    {
        M1[A[i]]=i;
        M2[A[i]]=B[i];
    }
    sort(A,A+N);
    ll ans=0;
    for(ll i=1;i<N;++i)
    {
        while(fun(M1,A[i]))
        {
            ans++;
            M1[A[i]]+=M2[A[i]];
        }
    }    
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}