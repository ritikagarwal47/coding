#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    for(ll i=0;s[i];++i)
    {
        if(s[i]=='6')s[i]='9';
        else if(s[i]=='9')s[i]='6';
    } 
    reverse(s.begin(),s.end());
    cout<<s<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/