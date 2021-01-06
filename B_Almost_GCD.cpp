#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
      ll N;cin>>N;
      ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
      ll mx=0,ans=0;
      for(ll i=2;i<=1000;++i)
      {
          //if(A[i]>=2){
          ll c=0;
          for(ll j=0;j<N;++j)
          {
              if(A[j]%i==0)++c;
          }
          if(c>mx)
          {
              mx=c;
              ans=i;
          }
          //}
      }
      cout<< ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/