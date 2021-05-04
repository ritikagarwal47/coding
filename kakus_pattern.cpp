#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;--N;
    ll a = N-1,b=2;
    for(ll i=1;i<=2*N-1;++i)
    {
        for(ll j=0;j<a;++j)cout<<"* ";
        for(ll j=0;j<b;++j)cout<<"  ";
        for(ll j=0;j<a;++j)cout<<"* ";
        cout<<'\n';    
        if(i<N)--a,b+=2;
        else ++a,b-=2;
    } 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/