#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;
    ll N=0,p=0;
    vector<string> ans;
    while(getline(cin,s))
    {
        ++p;
        //cout<<s<<'\n';
        //getline(cin,s);
        
        string curr="";
        string z ="\\n";
        //cout<<z<<'\n';
        //cout<<z[0]<<' '<<z[1]<<'\n';
        //if(s[0]!=z[0])curr+=s[0];
        for(ll i=0;i<s.size();++i)
        {
            if(i==s.size()-1)
            {
                curr+=s[i];
                ans.push_back(curr);
                break;
            }
            if(s[i]==z[0] and s[i+1]==z[1])
            {
                ans.push_back(curr);curr="";++N;++i;
            }
            else curr+=s[i];
        }
        //if(s[s.size()-1]!='n')curr+=s[s.size()-1];
        //ans.push_back(curr);curr="";
    }  
    cout<<N<<'\n';
    cout<<p<<'\n';
    for(auto i :ans)cout<<i<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/