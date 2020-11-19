#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll a,b;cin>>a>>b;
    ll d=abs(a-b) - 1;
    if(a==b or d==0)cout<<a+b <<'\n';
    else cout<< a+b + d <<'\n';
    // if(a==b or d==1)cout<<a+b <<'\n';
    // else if(a<b)
    // {
    //     cout<< a+b+d <<'\n';
    // }
    // else
    // {
    //     cout<< a+ b + d + 1 <<'\n';
    // }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/