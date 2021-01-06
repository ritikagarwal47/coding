#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
   ll N;cin>>N;
   ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
   ll i=1,j=N-2;
   bool f1=true,f2=true;
   ll ans=2;
   while(i<=j and (f1 or f2))
   {
       if(i==j)
       {
           if((A[j]>=A[j+1]) or (A[i]>=A[i-1]))++ans;
           break;
       }
       if(f1)
       {
           if(A[j]>=A[j+1])
           {
               ++ans;--j;
           }
           else f1=false;
       }

       if(f2)
       {
           if(A[i]>=A[i-1])
           {
               ++ans;++i;
           }
           else f2 = false;
       }
       //cout<< i<< ' ' <<j <<'\n';
   }   
   cout<< ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/