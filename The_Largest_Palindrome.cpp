#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool check(ll N)
{
    ll M = N;
    ll rev=0;
    while(N>0)
    {
        rev = rev*10 + N%10;
        N/=10;
    }
    if(rev==M)return true;
    return false;
}
void solve()
{
    //string s;cin>>s;
    ll N;cin>>N;
    ll i=N;
    while(true)
    {
        if(check(i))
        {
            cout<<i<<' '<< N - i <<'\n';break;
        }
        i--;
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;    //    cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/