#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll M,K,N,S,W,E;cin>>M>>K>>N>>S>>W>>E;
    S*=K;
    if((S+W)>=M)cout<<M<<'\n';
    else cout<<"-1\n";   
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;      //  cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/