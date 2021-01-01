#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    for(ll i=0;i<N;++i)
    {
        if(i<=N/2){
        for(ll j=0;j<N;++j)
        {
            if(j==0 or i==j)cout<<"*";
            else cout<<" ";
        }
        }
        else
        { 
        for(ll j=N-1;j>=0;--j)
        {
            if(j==N-1 or i==j)cout<<"*";
            else cout<<" ";
        }
        }
        cout<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/