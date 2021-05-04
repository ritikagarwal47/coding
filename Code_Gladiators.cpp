#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool valid(string s,string a)
{
    ll N = a.size();
    ll j=0;
    for(ll i=0;s[i];++i)
    {
        if(s[i]==a[j])++j;
        if(j==N)return true;
    }
    return false;
}
void solve()
{
    string s;cin>>s;
    ll N;cin>>N;
    while(N--)
    {
        string a;cin>>a;
        if(valid(s,a))cout<<"POSITIVE\n";
        else cout<<"NEGATIVE\n";
    }  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/