#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
int main()
{
    ll N;cin>>N;
    ll x;ll ans=0;
    for(ll i=1;i<=N;++i)
    {
        cin>>x;
        if(x==i)++ans;
    }
    cout<< (ans+1)/2 <<'\n';
}