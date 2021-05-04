#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    for(ll i=0;i<N;++i)
    {
        ll a = i;
        for(ll j=0;j<K;++j)
        {
            cout<<(char)(a%26+'a') <<' ';++a;
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