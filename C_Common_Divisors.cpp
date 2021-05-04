#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
   ll N;cin>>N;
   //ll A[N]; 
   ll x,g=0;
   for(ll i=0;i<N;++i)   
   {
       cin>>x;
       g = __gcd(g,x);
       //cout<<g<<'\n';
   }
   ll ans=0;
   for(ll i=1;i*i<=g;++i)
   {
       if(i*i==g)++ans;
       else if(g%i==0)ans+=2;
   }
   cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/