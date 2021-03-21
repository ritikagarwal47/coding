#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool valid(ll i,string s)
{
    if(s[i+1]=='a' and s[i+2]=='r' and s[i+3]=='t' and s[i+4]=='y')return true;
    return false;
}
void solve()
{
    string s;cin>>s;
    ll N = s.size();
    for(ll i=0;i<N-4;++i)
    {
        //string str = s.substr(i,i+5);
        if(s[i]=='p' and valid(i,s))
        {
        s[i+2] = 'w';
        s[i+3] = 'r';
        s[i+4] = 'i';
        i+=4;
        }
        //cout<<str<<'\n';
    } 
    cout<<s<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/