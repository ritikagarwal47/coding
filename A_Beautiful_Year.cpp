#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool fun(ll N)
{
    ll a = 0;
    set<ll> s;
    while(N>0)s.insert(N%10),N/=10,++a;
    if(s.size()==a)return true;
    return false;
}
void solve()
{
    ll N;cin>>N;++N;
    while (1)
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
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/