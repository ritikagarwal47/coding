#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll gcd(ll a,ll b)
{
    if(a==0)return b;
    return gcd(b%a,a);
}
void solve()
{
    ll a,b;cin>>a>>b;
    if(gcd(a,b)>1)cout<<"0\n";
    else if((gcd(a+1,b)>1) or (gcd(a,b+1)>1))cout<<"1\n";
    else cout<<"2\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/