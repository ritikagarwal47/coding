#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
bool isPalindrome(string str) 
{
    int l = 0; 
    int h = str.size() - 1; 
    while (h > l) 
    { 
        if (str[l++] != str[h--])return false;
    } 
    return true;
} 
void solve()
{
    string s;cin>>s;
    ll N = s.size();
    char f = s[0];
    char l = s[N-1];
    if(isPalindrome(s))
    {
        cout<<"0\n";return;
    }
    bool ff=false,fl=false;
    ll x,y;
    for(ll i=1;i<N-1;++i)
    {
        if(s[i]==l)
        {
            fl=true;x=i;break;
        }
    }
    for(ll i=N-2;i>=1;--i)
    {
        if(s[i]==f)
        {
            ff=true;y=i;break;
        }
    }
    if(ff)
    {
        cout<<"2\n";
        cout<<"R 2\n";
        cout<<"R "<< y+1 + N - 2 <<'\n';
    }
    else
    {
        cout<<"2\n";
        cout<<"L "<<N-1<<"\n";
        cout<<"L "<< x+1 <<'\n';

    }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/