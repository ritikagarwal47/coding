#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<string> ans;
void pre(ll N,ll c,string s="")
{
    if(c==N)
    {
        ans.push_back(s);return;
    }
    for(char i='a';i<='z';++i)
    {
        pre(N,c+1,s+i);
    }
}
void solve()
{
    //for(auto i:ans)cout<<i<<' ';cout<<'\n'; 
    //for()
    string s;cin>>s;
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
for(ll i=1;i<=4;++i)pre(i,0);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/