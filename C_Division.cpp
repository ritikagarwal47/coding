#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
vector <ll> V;
void printDivisors(ll n) 
{ 
    for (ll i=1; i*i<=n; i++) 
    { 
        if (n%i == 0) 
        { 
            // // If divisors are equal, print only one 
            // if (n/i == i) V.push_back(i);
            //    // printf("%d ", i); 
  
            // else 
            // {
                if(i!=1)V.push_back(i);
                V.push_back(n/i);
            // }
            // // Otherwise print both 
            //     //printf("%d %d ", i, n/i); 
        } 
    } 
} 
void solve()
{
     ll p,q;cin>>p>>q;
     if((p%q)!=0)cout<<p<<'\n';
     else if(q>p)cout<<p<<'\n';
     else
     {
         V.clear();
         printDivisors(q);
         ll ans =0;
         for(ll i=0;i<V.size();++i)
         {
            ll c = p;
            while (c % q == 0 && c % V[i] == 0) {c /= V[i];}
            if (c % q != 0) ans = max(ans, c);
         }
         cout<< ans <<'\n';
         //sort(V.begin(),V.end(),greater<ll>());
         //for(ll i=0;i<V.size();++i)cout<<V[i]<<' ';
        //  for(ll i=0;i<V.size();++i)
        //  {
        //      if((V[i]%q )!=0)
        //      {
        //          cout<<V[i]<<'\n';return;
        //      }
        //  }
     }
      
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/