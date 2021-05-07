#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool isPrime(ll  n)
{
    if (n <= 1)  return false;
    if (n <= 3)  return true;
    if (n%2 == 0 || n%3 == 0) return false;
   
    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;
   
    return true;
}
ll  nextPrime(ll N)
{
    if (N <= 1)
        return 2;
 
    ll prime = N;
    bool found = false;
    while (!found) {
        prime++;
 
        if (isPrime(prime))
            found = true;
    }
 
    return prime;
}
struct four{
    ll a,b,c,d;
};
void solve()
{
    ll N;cin>>N;
    ll A[N],mn = LONG_MAX,a=-1;
    for(ll i=0;i<N;++i)
    {
        cin>>A[i];
        if(A[i]<mn)
        {
            mn=A[i];
            a=i;
        }
    }
    ll x = nextPrime(mn);
    ll y = nextPrime(x);
    four ans[N];
    ll last =x;
    for(ll i=0;i<N;++i)
    {
        if(i==a) continue;
        ans[i].a = a+1;
        ans[i].b = i+1;
        ans[i].c = mn;
        if(last==x)ans[i].d = x,A[i]=x,last=y;
        else ans[i].d = y,A[i] = y,last=x;
    }
    cout<<N-1<<"\n";
    for(ll i=0;i<N;++i)
    {     
        if(i!=a)
        {
            cout<<ans[i].a<<" "<<ans[i].b<<" "<<ans[i].c<<" "<<ans[i].d<<"\n";
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/