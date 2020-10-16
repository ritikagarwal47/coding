#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
   ll N;cin>>N;
   ll A[N]; ll B[N];
   for(ll i=0;i<N;++i)
   {
       cin>>A[i];B[i]=0;
   }
   ll mx=0;
   for(ll i=0;i<N;++i)
   {
       ll c=0;
       for(ll j=i+1;j<N;)
       {
           if(A[j]==A[i])
           {
               c++;j++;
           }
           else if(j+1<N  and A[j+1]==A[i])
           {
               c++;j+=2;
           }
           else j=N+1;
       }
       mx=max(mx,c);
   }
   cout<< mx <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/