#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll power(ll x, ll  y) 
{ 
    if( y == 0) 
        return 1; 
    if (y%2 == 0) 
        return power(x, y/2)*power(x, y/2); 
    return x*power(x, y/2)*power(x, y/2); 
} 
ll order(ll x) 
{ 
    ll n = 0; 
    while (x) 
    { 
        n++; 
        x = x/10; 
    } 
    return n; 
} 
bool isArmstrong(ll x) 
{ 
    ll n = order(x); 
    ll temp = x, sum = 0; 
    while (temp) 
    { 
        ll r = temp%10; 
        //cout<<r<<' '<< pow(r,n)<<'\n';
        sum += power(r, n); 
        temp = temp/10; 
        //cout<<sum<<' '<<temp<<'\n';
    } 
    //cout<<sum<<' '<<x<<'\n';
    return (sum == x); 
} 
void solve()
{
    ll N;cin>>N;
    if(isArmstrong(N))cout<<"FEELS GOOD\n";
    else cout<<"FEELS BAD\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/