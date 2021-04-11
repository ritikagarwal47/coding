#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
set<string> st;
void fun(string s,ll i,ll N,string curr="")
{
    if(i==N)return;
    if(curr!="")st.insert(curr);
    cout<<curr<<' ';
    if(s[i]=='0' and curr=="")fun(s,i+1,N,curr);    
    else
    {
        fun(s,i+1,N,curr + s[i]);
        fun(s,i+1,N,curr);
    }
}
bool prime(ll n)
{
    if (n <= 1)return false;
    if (n <= 3)return true;
    if (n % 2 == 0 || n % 3 == 0)return false;  
    for (ll i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 or n % (i + 2) == 0)return false;
    }
    return true;
}
void solve()
{
    string N;cin>>N;
    //sort(N.begin(),N.end());
    fun(N,0,N.size());
    //for(auto i:st)cout<<i<<' ';cout<<'\n';
    set<ll> ans;
    for(auto i: st)
    {
        ll p = stoll(i);
        if(prime(p))
        {
            ans.insert(p);
        }
    }
    for(auto i:ans)cout<<i<<' ';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/