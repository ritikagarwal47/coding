#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    ll N = s.size();
    if(N==1)
    {
        cout<<"0\n";return;
    }
    if(N==2)
    {
        if(s[0]!=s[1])cout<<"0\n";
        else cout<<"1\n";
        return;
    }
    ll ans=0;
    for(ll i=1;s[i];++i)
    {
        if(i==1)
        {
            if(s[i]==s[i-1])
            {
                ++ans;
                s[i]='#';
                //s[i-1]='#';
            }
            continue;
        }
        if(s[i]==s[i-1] or s[i]==s[i-2])
        {
            ++ans;
            s[i]='#';
           // s[i-1]='#';
            // s[i-2]='#';
        }
    }
   // cout<< s <<'\n';
    cout<< ans <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/