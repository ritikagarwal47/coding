#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    map<char,ll> M;
    for(ll i=0;s[i];++i)
    {
        M[s[i]]++;
    }
    bool ok = false;
    ll c=0;
    for(auto i : M)
    {
        if(i.second&1)
        {
            ok=true;
            c++;
        }
    }
    if(ok)--c;
    cout<< c <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/