#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    ll N=s.size(),i=0;
    bool ok=false;
    while(i<N)
    {
        if(i<N-2 and s[i]=='W' and s[i+1]=='U' and s[i+2]=='B')
        {
            if(ok)cout<<' ';
            i+=3,ok=false;//continue;
        }
        else
        {
            cout<<s[i];ok=true;++i;
        }
        //if(!ok)cout<<' ';        
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/