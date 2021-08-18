#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void SieveOfEratosthenes(int n)
{
    // Create a boolean array
    // "prime[0..n]" and initialize
    // all entries it as true.
    // A value in prime[i] will
    // finally be false if i is
    // Not a prime, else true.
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        // If prime[p] is not changed,
        // then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples
            // of p greater than or
            // equal to the square of it
            // numbers which are multiple
            // of p and are less than p^2
            // are already been marked.
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    for (int p = 2; p <= n; p++)
        if (prime[p])
            cout << p << " ";
}
int fun(int n)
{
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    vector<int> V;
    V.push_back(1);
    for(int i=2;i<=n;++i)
    {
        if(prime[i])V.push_back(i);
    }
    //for(auto i:V)cout<<i<<' ';cout<<'\n';
    int ans=0;
    while(n>0)
    {
        int p = lower_bound(V.begin(),V.end(),n) - V.begin();
        int a = V[p-1];
        cout<<a<<' '<<p<<' '<<n<<'\n';
        while(n%a and a>0 and p>0)
        {
           --p;
            a = V[p];
        }
        if(a==1)--n;
        else n=a;
        //--n;
        ++ans;
    }
    return ans;
}
void solve()
{
    ll N;cin>>N;
    cout<< fun(N) <<'\n';  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/