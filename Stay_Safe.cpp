#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string st;cin>>st;
    bool s=0,a=0,f=0,e=0;
    for(ll i=0;st[i];++i)
    {
        if(st[i]=='s')s=1;
        else if(st[i]=='a')a=1;
        else if(st[i]=='f')f=1;
        else if(st[i]=='e')e=1;
    }
    if(s and a and f and e)cout<<"Safe";
    else cout<<"Not safe";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/