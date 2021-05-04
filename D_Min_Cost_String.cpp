#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
vector<char> adj[26];
vector<bool> vis(26,false);
string ans;
ll N;
void dfs(ll x)
{
    if(N==0)return;
    vis[x]=true;
    for(auto i:adj[x])
    {
        if(N==0)return;
        char ch = i + 'a';
        ans+=ch;N--;
        if(N==0)return;
        if(!vis[i])dfs(i);
        if(i==x)continue;
        if(N==0)return;
        ch = x + 'a';
        ans+=ch;N--;
        if(N==0)return;
    }
}
void solve()
{
    ll K;cin>>N>>K; 
    ll p = N;
    if(p==1)
    {
        cout<<"a\n";return;
    }
    for(ll i=0;i<K;++i)
    {
        for(ll j=i;j<K;++j)
        {
            adj[i].push_back(j);
        }
    } 
    ans='a';N--;
    dfs(0);
    string res="";
    while(res.size()<p)
    {
        res+= ans.substr(1);
    }
    cout<< res.substr(0,p) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/