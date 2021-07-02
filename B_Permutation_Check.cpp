#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll A[N+1];for(ll i=1;i<=N;++i)cin>>A[i];
    for(ll i=1;i<=N;++i)
    {
        ll p = abs(A[i]);
        if(A[p]<=0 or p<=0)
        {
            cout<<"No";return;
        }
        A[p] = - A[p]; 
        //for(auto i:A)cout<<i<<' ';cout<<'\n';
    }
    cout<<"Yes";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/