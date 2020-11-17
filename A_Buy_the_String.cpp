#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N,c0,c1,h;cin>>N>>c0>>c1>>h;
    string s;cin>>s;
    ll o=0,z=0;
    for(ll i=0;i<N;++i)
    {
        if(s[i]=='1')++o;
        else z++;
    }
    ll p0 = c0 * z;
    ll p1 = c1 * o;
    cout<< min(N*c0 + h*o ,min(p0 + p1 , N*c1 + h*z)) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/