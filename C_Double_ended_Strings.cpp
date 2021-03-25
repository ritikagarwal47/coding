#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
   string a,b;cin>>a>>b;
   ll ans=0,mx=0,res=0;
   ll N = a.size();
   ll p = a.size(),q=b.size();
   ll r=0;
   //while(N--){
       ll i =0;//,j=0;
       
       res=0;
       for(;i<p;++i){
           res=0;
           ll c = i;
       for(ll j=0;j<q;++j)
       {
           res=0,c=i;
           for(ll k=j;k<q;++k){
           if(a[c]==b[k])
           {
               ++res;++c;
           }
           else break;
        }
       ans = max(ans,res);
       }
       ans = max(ans,res);
       }
       ++r;
       
         //}
         //cout<<ans<<' ';
         cout<< ( p + q - 2*ans )<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/