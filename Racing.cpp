#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll X,R,M;cin>>X>>R>>M;
    ll p = (M + 1)/2;
    //cout<<p<<'\n';
    if(X>=60*R)
    {
        if(R<=M)cout<<"YES\n";
        else cout<<"NO\n"; 
    }

    else 
    {
        if(X+2*(60*R-X)<=60*M)cout<<"YES\n";
        else cout<<"NO\n";   
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/