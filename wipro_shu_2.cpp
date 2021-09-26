#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    map<char,int> M;
    for(int i=0;s[i];++i)
    {
        M[s[i]]++;
    }
    int n;cin>>n;
    long ans=0;
    for(int i=0;i<n;++i)
    {
        char c;cin>>c;
        ans+= M[c]*((int)c);
    }
    cout<<ans<<'\n';
    return 0;
}