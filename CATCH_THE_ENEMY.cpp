#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool f=true;
vector<string> V;
void fun(ll a,ll b,ll x,string curr="")
{
    if(a==0 and b==0)
    {
        V.push_back(curr);
        f=false;
        return;
    }
    for(ll i=x+1;i<=8;++i)
    {
        fun(a+pow(2,i),b,i,curr + "E");
        fun(a-pow(2,i),b,i,curr + "W");
        fun(a,b+pow(2,i),i,curr + "N");
        fun(a,b-pow(2,i),i,curr + "S");
    }

}
void solve()
{
    V.clear();
     ll a,b;cin>>a>>b; 
     fun(a,b,-1);
     if(f)
     {
         cout<<"IMPOSSIBLE\n";return;
     }
     sort(V.begin(),V.end());
     for(ll i=0;i<V.size();++i);
     cout<<V[0]<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/