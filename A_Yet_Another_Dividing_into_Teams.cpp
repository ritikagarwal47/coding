#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    sort(A,A+N);
    bool ok=false;
    for(ll i=0;i<N-1;++i)
    {
        if((A[i+1]-A[i])==1)ok=true;
    }
    if(ok)cout<<"2\n";
    else cout<<"1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/