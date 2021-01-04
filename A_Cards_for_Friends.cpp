#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll w,h,n;cin>>w>>h>>n;
    ll ans=1;
    ll i=1;
    while(w%2==0 or h%2==0)
    {
        if(w%2==0)ans+=i,w/=2;
        else if(h%2==0)ans+=i,h/=2;

        i*=2;
    }
    //cout<< ans <<'\n';
    cout<< (ans>=n ? "YES" : "NO") <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/