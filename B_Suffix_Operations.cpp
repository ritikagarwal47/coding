#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    map<ll,ll> M;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i],M[A[i]]++;
    if(N==1 or N==2 or M.size()==1)
    {
        cout<<"0\n";
    }
    else if(M.size()==2)
    {
        for(auto i :M)
        {
            if(i.second==1)
            {
                cout<<"0\n";return;
            }
        }
    }
    ll ans=0;
    for(ll i=3;i<N;++i)
    {
        ans += abs( abs(A[i-1]) - abs(A[i]));
    }
    cout<< ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/