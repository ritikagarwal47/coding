#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    string ans="";
    for(ll i=0;s[i];++i)
    {
        if (s[i] != 'a' or s[i] != 'e' or s[i] != 'i' or  s[i] != 'o' or  s[i] != 'u' or s[i] != 'A' or  s[i] != 'E' or  s[i] != 'I' or  s[i] != 'O'  or  s[i] != 'U')
        {
            //ans += "." + tolower(s[i]);
            putchar(tolower(s[i]));
        }
    }
    // if(ans=="")cout<<".";
    // else 
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/