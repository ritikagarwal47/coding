#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
   ll N,K;cin>>N>>K;
   ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
   ll s = A[N-1];
   ll a=1;
   for(ll i=N-2;i>=0;--i)
   {
       if(K<=0)break;
       if(A[i]>1)
       {
           ll p = A[i]/2;
           ll k = p ;
           while(k>0 and K>=a)
           {
               s+= 2;
               k--;K-=a;
           }
       }
       ++a;
   }  
   cout<<s<<'\n'; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/