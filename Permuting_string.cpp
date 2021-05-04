#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
string s = "abcdefghijklmnopqrstuvwxyz";
void solve()
{
    ll N,K;cin>>N>>K;
    string str = s.substr(0,N);
    for(ll i=0;i<K;++i)
    {
        cout<< str.substr(i%N)<< str.substr(0,i%N)<<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/