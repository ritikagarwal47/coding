#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a,b;cin>>a>>b;
    ll sa=0,sb=0;
    while(a)sa+=a%10,a/=10;
    while(b)sb+=b%10,b/=10;
    cout<< max(sa,sb) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/