#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    string s;cin>>s;
    while(1)
    {
        ll c=0;
        string str="";
        ll N = s.size();
        for(ll i=0;i<N;++i)
        {
            if((N-i)>2 and s[i]=='a' and s[i+1]=='b' and s[i+2]=='c')i+=2,c=1;
            else str+=s[i];
        }
        s=str;
        if(c==0)break;
    }
    cout<<s<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/