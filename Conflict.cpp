#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll gcd(ll a, ll b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
void solve()
{
   ll n;cin>>n;
   ll R,S;
    ll odd = ceil(n/2.0)*ceil(n/2.0);
    ll even = (n/2)*((n/2)+1);
    R = ceil((2*n)/(3.14));
    S = ceil(n/2.0);
   if(lcm(even,S)<=lcm(odd,R))cout<<"YESS(sunglass emo)\n";
   else cout<<"Nova's gonna kill me\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/