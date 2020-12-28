#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
   ll N,M;cin>>N>>M;
   string s;cin>>s;
   if(M==2)
   {
       ll a=0,b=0;
       for(ll i=0;s[i];++i)
       {
           if(i&1 and s[i]!='A')++a;
           else if(i%2==0 and s[i]!='B')++a;
       }
       for(ll i=0;s[i];++i)
       {
           if(i&1 and s[i]!='B')++b;
           else if(i%2==0 and s[i]!='A')++b;
       }
       if(a>b)
       {
           cout<<b<<'\n';
           for(ll i=0;i<N;++i)cout<< (char)(i%2 + 'A');
       }
       else
       {
           cout<< a <<'\n';
           for(ll i=1;i<=N;++i)cout<< (char)(i%2 + 'A');
       }
       return ;
   }
   ll ans=0;
   for(ll i=1;s[i];++i)
   {
       if(s[i]==s[i-1])
       {
           ans++;
           for(ll j=0;j<M;++j)
           {
               if((j + 'A')!=s[i-1] and (j + 'A')!=s[i+1])
               {
                   s[i] = (j + 'A');break;
               }
           }
       }
   } 
   cout<< ans <<'\n';
   cout<< s <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/