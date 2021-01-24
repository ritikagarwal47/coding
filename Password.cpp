#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool check(char x)
{
    if(x=='@' or x=='#' or x=='%' or x=='&' or x=='?')return true;
    return false;
}
void solve()
{
    string s;cin>>s;
    //ll A = count(s.begin(),s.end(),'A');
    //ll Z = count(s.begin(),s.end(),'Z');
    //ll z = count(s.begin(),s.end(),'0');
    //ll n = count(s.begin(),s.end(),'9');
        
    if(s.size()<10)cout<<"NO\n";
    else
    {
        ll N = s.size();
        ll ok1=0,ok2=0,ok3=0,ok4=0;
        for(ll i=0;s[i];++i)
        {
            if(s[i]>='a' and s[i]<='z')ok1++;
            if(s[i]>='A' and s[i]<='Z')ok2++;
            if(s[i]>='0' and s[i]<='9')ok3++;
            if(s[i]=='@' or s[i]=='#' or s[i]=='%' or s[i]=='&' or s[i]=='?')ok4++;
        }
        if(ok2==1 and ((s[0]>='A' and s[0]>='Z') or (s[N-1]>='A' and s[N-1]<='Z')))
        {
            cout<<"NO\n";return;
        }
        if(ok2==2 and ((s[0]>='A' and s[0]<='Z') and (s[N-1]>='0' and s[N-1]<='9')))
        {
            cout<<"NO\n";return;
        }
        if(ok3==1 and ((s[0]>='0' and s[0]<='9') or (s[N-1]>='0' and s[N-1]<='9')))
        {
            cout<<"NO\n";return;
        }
        if(ok3==2 and ((s[0]>='0' and s[0]<='9') and (s[N-1]>='0' and s[N-1]<='9')))
        {
            cout<<"NO\n";return;
        }
        if(ok4==1 and ((check(s[0]) or (check(s[N-1])))))
        {
            cout<<"NO\n";return;
        }
        if(ok4==2 and ((check(s[0]) and (check(s[N-1])))))
        {
            cout<<"NO\n";return;
        }
        cout<<"YES\n";
    } 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/