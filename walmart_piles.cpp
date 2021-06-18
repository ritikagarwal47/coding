#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    map<ll,ll> M;//ll mn=LONG_MAX,mx=0;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i],++M[A[i]];
    sort(A,A+N);
    // ll avg = s/N;
    ll p = A[N-1]-A[0];
    ll ans=0;
    if(p==K){}
    else if(p<K)ans=abs(p-K);
    else
    {
        vector<pair<ll,ll>> V;
        for(auto i:M)V.push_back(i);
        ll i=0,j=V.size()-1;
        
        while(i<j)
        {
            //ll mn = A[i],mx=A[j];
            ll a = V[i].first;
            ll b = V[j].first;
            if((b-a)==K)break;
            ll x = V[i].second*(min(b-K,V[i+1].first)-V[i].first);
            ll y = V[j].second*(V[j].first-max(a+K,V[j-1].first));
            //cout<<x<<' '<<y<<'\n';
            if(x<=y)ans+=x,V[i+1].second+=V[i].second,++i;
            else ans+=y,V[j-1].second+=V[j].second,--j;
        }
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/