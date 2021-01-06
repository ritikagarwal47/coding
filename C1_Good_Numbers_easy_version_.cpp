#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool fun(ll N)
{
    if(N==0)return true;
    if(N%3==2)return false;
    return fun(N/3);
}
void solve()
{
    ll N;cin>>N;
    while(!fun(N))++N;
    cout<<N<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/