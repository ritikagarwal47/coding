#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
// ll sum(ll *arr, ll n) 
// { 
//   ll ans = 0; 
  
//   // Finding sum of the array. 
//   for (ll i = 0; i < n; i++) 
//     ans += arr[i]; 
  
//   return ans * pow(2, n - 1); 
// } 
void solve()
{
    ll N;cin>>N;
    ll A[N]; for(ll i=0;i<N;++i)cin>>A[i];
    ll ans=0,s=0;
    for(ll i=0;i<N;++i)
    {
      s+=A[i];
      ans |=A[i];
      ans |= s;
    }
    cout<<ans<<'\n';
    //cout << sum(A, N) << endl; 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/