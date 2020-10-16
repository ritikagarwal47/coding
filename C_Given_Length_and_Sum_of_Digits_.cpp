#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
   ll M,S;cin>>M>>S;
   if(M==1 and  S==0)cout<<"0 0";
   else if(S==0 or M*9<S)cout<<"-1 -1";
   else
   {
       string mx="",mn="";
       ll c=S;
       for(ll i=0;i<M;++i)
       {
           if(c>=9)
           {
               mx.push_back('9');
               c-=9;
           }
           else
           {
                mx.append(to_string(c));
                c=0;
           }
       }
       c=S-1;
       for(ll i=1;i<=M;++i)
       {
           if(c>=9)
           {
               mn = '9' + mn;
               c-=9;
           }
           else if(i==M)
           {
               mn =  to_string(c + 1) + mn;
           }
           else
           {
                mn =  to_string(c) + mn;
                c=0;
           }
       }
       cout<<mn<<' '<<mx<<'\n';
   }
   
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;     //   cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/