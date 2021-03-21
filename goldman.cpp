#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
void solve()
{
    string s;cin>>s;
    map<char,int> M;
    for(int i=0;s[i];++i)++M[s[i]];
    int ans=0;
    for(auto i : M)
    {
        ans += i.second/2;
    }
    cout<<ans<<'\n';
}
int main(void)
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int T=1;            // cin>>T;
    while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/