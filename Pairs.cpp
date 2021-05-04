#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll x;
    ll c=0,o=0,z=0;
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        if(x==0 or x==1)++c;
        if(x==0)z++;
        if(x==1)o++;
    }
    if(c==0)
    {
        cout<<"0\n";
    }
    else
    {
        if(o==0)cout<< c*(N-c) <<'\n';
        else cout<< o*(o-1)/2 + z*o + c*(N-c) <<'\n';
    }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/