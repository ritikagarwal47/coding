#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll fun(ll *A,ll  n)
{
    sort(A,A + n);
    ll res = 0, sum = 0;
    for (ll i = 0; i < n; i++) 
    {
        res += (A[i] * i - sum);
        sum += A[i];
    }
 
    return res;
}
void distancesum(ll x[], ll y[], ll n)
{
    ll sum = 0;
    vector<ll> V;
    for (int i = 0; i < n; i++)
        for (int j = i + 1; j < n; j++)
        {
            V.push_back(max(abs(x[i] - x[j]),abs(y[i] - y[j])));
            cout<<
    sort(V.begin(),V.end());
    for(ll i:V)cout<<i<<' ';cout<<'\n';

}
void solve()
{
    ll N;cin>>N;
    ll x[N],y[N];
    for(ll i=0;i<N;++i)
    {
        ll a,b;cin>>a>>b;
        x[i]=a;y[i]=b;
    }
    distancesum(x,y,N);
    //cout<< fun(x,N) + fun(y,N);
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/