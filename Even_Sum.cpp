#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll x;
    if(N==1)
    {
        cin>>x;
        if(x&1)cout<<"2\n";
        else cout<<"1\n";
        return;
    }
    ll o=0,e=0;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        if(x&1)++o;
        else ++e;
    }
    if(o%2==0)cout<<"1\n";
    else cout<<"2\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/