#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll p = log2(N);
    //cout<< p <<'\n' ;
    for(ll i=1;i<=N;++i)
    {
        for(ll j=p;j>=0;--j)
        {
            if(i&(1<<j))cout<<'*';
            else cout<<'#';
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