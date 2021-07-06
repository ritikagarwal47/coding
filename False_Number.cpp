#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;
    cin>>s;
    string ans = "";
    if(s[0]!='1')
    {
        ans = "1" + s;
    }
    else
    {
        int i=0;
        while(s[i]=='1')
        {
            ++i;
        }
        ans = s.substr(0,i) + '0' + s.substr(i);
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/