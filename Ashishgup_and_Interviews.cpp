#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,K;cin>>N>>K;
    ll x;//bool ok=false;
    ll c=0,sl=0,z=0;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        if(x==1 or x==0)++z;
        if(x>K)sl++;
        if(x!=-1)++c;
    }
    ll p = (N+1)/2 ;
    if(p>c)cout<<"Rejected\n";
    else if(sl>0)cout<<"Too Slow\n";
    else if(z==N)cout<<"Bot\n";
    else cout<<"Accepted\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/