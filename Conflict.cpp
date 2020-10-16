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
   ll N;cin>>N;
   ll R,S;
   if(N&1)
   {
        R = N/2 + 1;
        S = N/2 + 1;
   }
   else 
   {
        R = N/2;
        S = N/2;      
   }
   ll p = N/2;
   ll even = 2*(p*(p+1)/2);
   ll odd  = N*(N+1)/2 - even;
   // koe bataoo R and S kaise niklega isme 
  // cout<<even<<' '<<odd;
   if(lcm(even,S)<=lcm(odd,R))cout<<"YESS(sunglass emo)\n";
   else cout<<"Nova's gonna kill me\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/