#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
   string s1,s2;cin>>s1>>s2;
   ll K;cin>>K;
   ll a=0,b=0;
   for(ll i=0;s1[i];++i)
   {
       if(abs(s1[i]-s2[i])>K)
       {
           cout<<"LOSE\n";return;
       }
       //cout<<i<<'\n';
       a+=(s1[i]-'a');
       b+=(s2[i]-'a');
   }   
   if(a==b)cout<<"WIN\n";
   else cout<<"LOSE\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/