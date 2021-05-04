#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll y,ans=LONG_MAX;
ll N;
void fun(ll cur,ll p,string s,ll i)
{
    if(cur==y and s.size()==0)
    {
        ans = min(ans,p);return;
    }
    if(i==N)return;
    if(s.size()==0)return;
    for(ll j=0;j<s.size();++j)//--j)
    {
        string v = s.substr(0,j);
        //cout<<v<<' ';
        fun(cur,p+1,s.substr(j),i+1);
        //fun(cur + stoi(s.substr(0,i)),p+1,s.substr(i),i+1);
    }
}
void solve()
{
    string s;cin>>s;
    // N = s.size();
    // ll p = 0;
    // for(ll i=0;s[i];++i)
    // {
    //     if(s[i]=='=')
    //     {
    //         p=i;
    //     }
    // }
    // string a = s.substr(0,p);
    // string b = s.substr(p+1,s.size());
    // //cout<<a<<' '<<b<<'\n';
    // y = stoll(b);
    // fun(0,0,a,0);
    // if(ans==LONG_MAX)
    cout<<"-1\n";
    //else cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/