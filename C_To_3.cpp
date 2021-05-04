#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll mn=LLONG_MAX,N;
void fun(string s,ll i,ll a,string curr="")
{
    if(i>=N and curr!="")
    {
        ll p = stoll(curr);
        //cout<<p<<'\n';
        if(p%3==0)
        {
            mn = min(mn,N - a);
        }
        return;
    }
    if(i>=N)return;
    fun(s,i+1,a+1,curr + s[i]);
    fun(s,i+1,a,curr);
}
void solve()
{
     // ll N;cin>>N;
    string s;cin>>s;
    N = s.size();
    fun(s,0,0);
    cout<< ((mn==LLONG_MAX) ? -1 : mn) ;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/