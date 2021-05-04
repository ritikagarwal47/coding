#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    for(ll i=0;i<K-3;++i)cout<<"1 ",N--;
    if(N%3==0)cout<<N/3<<' '<<N/3<<' '<<N/3<<'\n';
    else if(N%4==0)cout<<N/4<<' '<<N/4<<' '<<N/2<<'\n';
    else if(N&1) cout<<N/2 <<' '<<N/2<<' '<<1<<'\n';
    else cout<<N/2 -1  <<' '<<N/2 - 1 <<' '<<2<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/