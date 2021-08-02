#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    string s;cin>>s;
    string ans="";
    map<char,int> M;
    for(int i=s.size()-1;i>=0;--i)
    {
        if(M[s[i]]==0)ans+=s[i];
        M[s[i]]++;
    }
    cout<<ans<<'\n';
}