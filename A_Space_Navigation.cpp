#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
   ll A,B;cin>>A>>B;
   string s;cin>>s;
   string s1,s2;
   if(A>=0)s1="R";
   else s1="L";

   if(B>=0)s2="U";
   else s2="D";
    ll a=0,b=0;
    //cout<<s1<<' '<<s2<<'\n';
   for(ll i=0;s[i];++i)
   {
       if(s[i]==s1[0])++a;
       else if(s[i]==s2[0])++b;
       //cout<<a<<' '<<b<<'\n';
   }
   //cout<<A<<' '<<B<<'\n';
   if(a>=abs(A) and b>=abs(B))cout<<"YES\n";
   else cout<<"NO\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/