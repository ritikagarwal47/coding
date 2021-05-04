#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll fun(ll x,ll y)
{
    if(x%y==0)return x/y;
    return x/y  + fun(y,x%y);
}
void solve()
{
    ll x,y;cin>>x>>y;
    cout<< fun(x,y) <<'\n';  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/