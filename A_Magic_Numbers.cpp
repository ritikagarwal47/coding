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
        if(s[i]=='1')continue;
        else if(i>0 and s[i]=='4' and s[i-1]=='1')continue;
        else if(i>1 and s[i]=='4' and s[i-1]=='4' and s[i-2]=='1')continue;
        else
        {
            cout<<"NO\n";return;
        }        
    }
    cout<<"YES\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/