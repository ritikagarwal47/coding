#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
   ll N;cin>>N;
   string s;cin>>s;
   string A[]= {"","","2","3","322","5","53","7","7222","7332"};
   string ans="";
   for(ll i=0;i<N;++i)
   {
       ans += A[s[i]-'0'];
   }
   sort(ans.begin(), ans.end(), greater<char>()); 
   cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;     //   cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/