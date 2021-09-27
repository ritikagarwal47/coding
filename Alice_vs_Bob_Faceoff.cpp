#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool isPowerOfTwo(ll n)
{
    if (n == 0)
        return 0;
    if ((n & (~(n - 1))) == n)
        return 1;
    return 0;
}
void solve()
{
    ll N;cin>>N;
    if((N&1) and isPowerOfTwo(N+1))cout<<"Alice\n";
    else if(N&1)cout<<"Bob\n";
    else if((N%2==0 and isPowerOfTwo(N+2)))cout<<"Bob\n";
    else cout<<"Alice\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/