#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll lcm(ll a,ll b)
{
    return (a / __gcd(a, b)) * b;
}
void solve()
{
    ll N;cin>>N;
   // ll a=N,b=N-1,c=N-2;
    if(N==1)cout<<"1";
    else if(N==2)cout<<"2";
    else cout<< max(lcm(lcm(N,N-1),N-2),max(lcm(lcm(N-1,N-2),N-3),lcm(lcm(N-2,N-3),N-4))) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/