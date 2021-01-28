#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll gcd(ll a,ll b) 
{ 
    return (a%b == 0)? abs(b) : gcd(b,a%b); 
} 
bool isPossible(ll a,ll b,ll c) 
{ 
    return (c%gcd(a,b) == 0); 
} 
void solve()
{
    ll N;cin>>N;
    if(N<4041)
    {
        cout<<"NO\n";return;
    }
    ll a=2020,b=2021;
    for (ll i = 0; i * a < N; i++) 
    { 
        if((N - (i * a)) % b == 0) 
        { 
            cout << "YES\n";
            return; 
        } 
    } 
  
    cout << "NO\n";  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/