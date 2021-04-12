#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll digit(ll N)
{
    ll ans=0;
    while(N)
    {
        N=N/10;++ans;
    }
    return ans;
}
void solve()
{
    ll n,m,k;cin>>n>>m>>k;
    ll m1=pow(10,n-1);
    ll m3=pow(10,m-1);
    string s1 = to_string(m1);
    string s2 = to_string(m3);
    ll p = digit(100);
    if(n>=k and m<k)
    {
        s1[s1.size()-k]='1';
        cout<<s1<<" "<<s2<<'\n';
        return;
    }
    
    if(n<k and m>=k)
    {
        s2[s2.size()-k]='1';
        cout<<s1<<" "<<s2<<'\n';
        return;
    }
    s2[s2.size()-k]='1';
    cout<<s1<<" "<<s2<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/