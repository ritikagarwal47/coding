#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,S;cin>>N>>S;
    if(N>(S/2))cout<<"NO\n";
    else
    {
        cout<<"YES\n";
        for(ll i=0;i<N-1;++i)cout<<"1 "; 
        cout<< S - (N-1) <<'\n';
        cout<<S/2<<'\n';
    }    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/