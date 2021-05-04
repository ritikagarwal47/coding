#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
   ll N;cin>>N;
   ll s=0;
   ll A[N]; for(ll i=0;i<N;++i)cin>>A[i],s+=A[i];
   if(N<3 or s%3)
   {
       cout<<"0";return;
   }
   ll a = s/3;
   ll b = s - a ;
   ll ans=0,c=0;
   s=0;
   for(ll i=0;i<N-1;++i)
   {
       s+=A[i];
       if(s==b)ans+=c;
       if(s==a)++c;
   }
   cout<< ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/