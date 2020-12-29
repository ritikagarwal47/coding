#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool fun(ll N)
{
    //ll a = N;
    string s = to_string(N);
    for(ll i=0;s[i];++i)
    {
        if(s[i]!='0')
        {
            if(N%(s[i]-'0'))return false;
        }
    }
    return true;
}
void solve()
{
    ll N;cin>>N;
    while(1)
    {
        if(fun(N))
        {
            cout<<N<<'\n';return;
        }
        ++N;
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/