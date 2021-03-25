#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,M,K;cin>>N>>M>>K;
    ll p = (K + N - 1 )/N ;
    ll q = K - (p-1)*N ;
    //cout<<p<<' '<<q<<'\n';
    cout<< (q-1)*M + p  <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/