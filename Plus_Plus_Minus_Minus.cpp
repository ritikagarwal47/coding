#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s,t;cin>>s>>t;
    ll l1=s.size();
    ll l2=t.size();
    ll i=0,j=0;
    while(j<l2)
    {
        if(s[i]==t[j])++i,++j;
        else if(t[j]=='-')
        {
            cout<<"NO\n";return;
        }
        else
        {
            if(s[i]=='-' and s[i+1]=='-')i+=2,++j;
            else
            {
                cout<<"NO\n";return;
            }            
        }       
        
    }
    cout<<"YES\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/