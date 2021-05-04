#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    if(N==1 or N==2 )
    {
        cout<<"1\n"<<N<<'\n';
        return;
    }  
    if(N==3)
    {
        cout<<"2\n"<<"1 3";return;
    }
    if(N==4)
    {
        cout<<"4\n"<<"3 1 4 2";return;
    }
    cout<<N<<'\n';
    for(ll i=1;i<=N;i+=2)cout<<i<<' ';
    for(ll i=2;i<=N;i+=2)cout<<i<<' ';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/