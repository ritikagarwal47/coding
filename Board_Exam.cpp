#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll printNcR(ll n,ll r)
{
    ll p = 1, k = 1;
    if (n - r < r)r = n - r;
 
    if (r != 0) {
        while (r) {
            p *= n;
            k *= r;
            ll m = __gcd(p, k);
            p /= m;
            k /= m;
 
            n--;
            r--;
        }
    }
    else
        p = 1;
    //cout << p << endl;
    return p;
}
void solve()
{
    ll N,X,Y;cin>>N>>X>>Y;
    ll a = printNcR(N,X);
    ll b = printNcR(N,Y);
    //cout<<a<<' '<<b<<' ';
    cout<<a*b<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/