#include<bits/stdc++.h>
#define ll unsigned long long int
//#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M;cin>>N>>M;
    ll p = (N*(N+1))/2;
    if(p<=M or (p-M)>N)cout<<"-1\n";
    else cout<<p-M<<'\n';  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/