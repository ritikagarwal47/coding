#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,A,B;cin>>N>>A>>B;
    ll a=0,b=0;
    while(N--)
    {
        string s;cin>>s;
        if(s[0]=='E' or s[0]=='Q' or s[0]=='U' or s[0]=='I' or s[0]=='N' or s[0]=='O' or s[0]=='X')a+=A;
        else b+=B;
    }
    if(a==b)cout<<"DRAW\n";
    else cout<<(a>b?"SARTHAK\n":"ANURADHA\n");
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/