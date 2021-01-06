#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    ll N =  s.size();
    string s1="",s2="";
    ll c=0;
    for(ll i=0,j=N-1;i<N and j>=0;++i,--j)
    {
        s1+=(s[i]);
        s2 = s[j] + s2;
        if(s1==s2)c++;
    }
    cout<<c<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;    //    cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/