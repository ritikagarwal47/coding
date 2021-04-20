#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll p,q;cin>>p>>q;
    for(ll i=1;i<=100005;++i)
    {
        if(p%(q*i + 1)==0)
        {
            cout<< i <<'\n';
            cout<< p/(q*i + 1) <<'\n';
            return;
        }
    } 
    cout<<"None\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/