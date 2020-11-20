#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    if(N==1 or N==2 )cout<<"No\n";
    else if(N==4)
    {
        cout<<"Yes\n";
        cout<<"2 1 3\n";
        cout<<"2 2 4\n";
    }
    else
    {
        // ll s = N*(N-1)/2;
        // if(s%2==0)
        cout<<"Yes\n";
        cout<<"2 1 "<<N<<'\n';
        cout<< N-2<<' ';
        for(ll i=2;i<N;++i)cout<<i<<' ';cout<<'\n';
    }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/