#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool isDigitPresent(ll x,ll d) 
{ 
    // Breal loop if d is present as digit 
    while (x > 0) 
    { 
        if (x % 10 == d) 
            break; 
  
        x = x / 10; 
    } 
  
    // If loop broke 
    return (x > 0); 
} 
  
// function to display the values 
void printNumbers(ll p,ll n,ll d,vector<ll> &V) 
{ 
    // Check all numbers one by one 
    for (ll i = p; i <= n; i++) 
  
        // checking for digit 
        if (i == d || isDigitPresent(i, d)) 
        {
            V.push_back(i);
        }
            //cout << i << " "; 
} 
void solve()
{
   ll N,D;cin>>N>>D;
   ll x;
   vector<ll> V;ll A[N];
   ll mx=0;
   for(ll i=0;i<N;++i)
   {
       cin>>A[i];
       mx=max(mx,A[i]);
   }
   printNumbers(D,mx,D,V);
   //for(auto i :V)cout<<i<<' ';cout<<'\n';
   for(ll i=0;i<N;++i)
   {
       if(binary_search(V.begin(),V.end(),A[i]))cout<<"YES\n";
       else cout<<"NO\n";
   }

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/