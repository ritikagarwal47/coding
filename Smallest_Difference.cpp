#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
   ll N;cin>>N;
   ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
   sort(A,A+N);
   pair<ll,ll> ans; 
   ll c=LLONG_MAX;
   for(ll i=0;i<N-1;++i)
   {
       if(abs(A[i]-A[i+1])<c)
       {
            c = abs(A[i]-A[i+1]);
            ans = make_pair(A[i],A[i+1]);
       }
   }
   cout<<ans.first<<' '<<ans.second<<'\n';

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/