#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,Q;cin>>N>>Q;
    ll A[N],s=0;map<ll,ll> M;
    for(ll i=0;i<N;++i)cin>>A[i],++M[A[i]];
    sort(A,A+N);
    ll x;
    while(Q--)
    {
        cin>>x;
        if(binary_search(A,A+N,x))
        {
            cout<<"0\n";continue;
        }
        ll p = lower_bound(A,A+N,x) - A;
        //cout<<p<<'\n';
        ll a = N - p;
        if(a&1)p=-1;
        else p=1;
        (p>0)?cout<<"POSITIVE\n":cout<<"NEGATIVE\n";
    }  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}