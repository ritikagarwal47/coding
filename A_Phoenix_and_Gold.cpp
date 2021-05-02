#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll s=0;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i],s+=A[i];

    if(s==K)
    {
        cout<<"NO\n";return;
    } 
    sort(A,A+N,greater<ll>());

    vector<ll> ans;
    s=0;
    for(ll i=0;i<N;++i)
    {
        if((s+A[i])!=K)
        {
            s+=A[i];ans.push_back(A[i]);
        }
        else
        {
            ans.push_back(A[i+1]);
            ans.push_back(A[i]);
            s+=A[i];s+=A[i+1];
            ++i;
        }
    }
    cout<<"YES\n";
    for(auto i:ans)cout<<i<<' ';cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/