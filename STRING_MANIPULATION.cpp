#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;ll R;cin>>s>>R;
    while(1)
    {
        bool ok = true;
        char cur=s[0];ll c=1;
        for(ll i=1;i<s.size();++i)
        {
            if(cur==s[i])++c;
            else 
            {
                cur=s[i];c=1;
            }

            if(c==R)
            {
                //cout<<i<<' '<<s.substr(0,i-c+1)<<' '<<s.substr(i+1,s.size())<<' ';
                string str = s.substr(0,i-c+1) + s.substr(i+1,s.size());
                //i=i-c;
                s = str;ok=false;break;
            }
            //cout<<s<<'\n';
        }
        if(ok)break;
    }
    cout<<s<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/