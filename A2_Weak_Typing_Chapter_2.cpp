#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll fun(string s)
{
    ll n = s.size();
    ll ans=0;
    for (ll i = 0; i < n; i++)
    {
        for (ll len = 1; len <= n - i; len++)
        {
            string p= s.substr(i, len) ;
            //cout<<p<<' ';
            string st = "";
    for(auto i:p)
    {
        if(i=='X' or i=='O')st+=i;
    }  
    //cout<<st<<' ';
    ll ans1=0,ans2=0;
    bool ok=true;
    for(auto i:st)
    {
        if(ok and i=='X'){}
        else if(!ok and i=='O'){}
        else 
        {
            ok = !ok;
            ans1++;
        }
    }
    ok=false;
    for(auto i:st)
    {
        if(ok and i=='X'){}
        else if(!ok and i=='O'){}
        else 
        {
            ok = !ok;
            ans2++;
        }
    }
        ans+=  min(ans1,ans2);
        ans%=mod;
        }
    }
    return ans;
}
void solve()
{
    ll N;cin>>N;
    ll ans=0;
    string s;cin>>s;
    cout<<fun(s)<<'\n';
    return;
    ll x=0,o=0;
    for(auto i:s)
    {
        if(i=='X')
        {
            ans+=o;
            ++x;
        }
        else if(i=='O')
        {
            ans+=x;
            ++o;
        }
        else 
        {
            ans+=ans;
        }
        ans%=mod;
    }  
    cout<< ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/