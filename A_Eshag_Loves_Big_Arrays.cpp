#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    map<ll,ll> M;
    ll N;cin>>N;
    ll A[N],mx=0,s=0;
    for(ll i=0;i<N;++i)cin>>A[i],s+=A[i],M[A[i]]++;
    ll ans=N; 
    double p  = ceil((double)s/(double)N)-1;
    //mx = s/N;
    //cout<<p<<' '; 
    for(auto i:A)
    {
        if(i>p)--ans;
    }
    sort(A,A+N);
    cout<< N - M[A[0]] <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/