#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a,b,c,d,e;cin>>a>>b>>c>>d>>e;
    set<ll> s;
    ll p=0;
    while (p<=e)s.insert(p),p+=a;

    p=0;
    while (p<=e)s.insert(p),p+=b;

    p=0;
    while (p<=e)s.insert(p),p+=c;

    p=0;
    while (p<=e)s.insert(p),p+=d;

    
    cout<< s.size()-1 <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/