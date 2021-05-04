#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    map<ll,ll> M;
    ll A[N]; 
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];
        ++M[A[i]];
    }
    for(auto  i : M)
    {
        if(i.second==N)
        {
            cout<<N<<'\n';return;
        }
    }
    //if(N==1){cout<<"1\n";return;}
    //ll ans=0;
    ll s = 1, b=1;
    for(ll i=1;i<N;++i)
    {
        ll x = s;
        ll y = b;
        if(A[i]<=A[i-1])x=b+1;
        else if(A[i]>=A[i-1])y=s+1;
        s = x;
        b = y;
    }
    cout<< max(s,b) - 1 <<'\n';
}
    
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/