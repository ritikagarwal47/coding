#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
   ll N;cin>>N;
   ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
   ll ans=0;
   ll i=0,c=A[i];
   while(i<(N-1))
   {
       if(c<A[i+1])
       {
           if(c*2<A[i+1])c*=2,++ans;
           else c=A[i+1],++i;
       }
       else if(c>A[i+1])
       {
           if(c%2==0)
           {
           //else c = c/2 + 1;
                if(c/2>A[i+1])c/=2,ans++;
                else c=A[i+1],++i;
           }
           else
           {
                if((c/2 + 1)>A[i+1])c=c/2 + 1,ans++;
                else c=A[i+1],++i;
           }
       }
       else ++i;
       //cout<<c<<' '<<ans<<'\n';
   }
   cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/