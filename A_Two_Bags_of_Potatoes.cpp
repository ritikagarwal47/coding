#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll Y,K,N;cin>>Y>>K>>N;
    bool ok=true;
    for(ll i=Y+(K-Y%K);i<=N;i+=K)
    {
        cout<< i - Y <<' ';ok=false;
    }
    if(ok)cout<<"-1";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/