#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    if(N==1)cout<<"1";
    else if(N==2)cout<<"2";
    else if(N&1)cout<<N*(N-1)*(N-2)<<'\n';
    else if(__gcd(N,N-3)==1)cout<<N*(N-1)*(N-3)<<'\n';
    else cout<<(N-1)*(N-2)*(N-3)<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/