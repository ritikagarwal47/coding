#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    long ans=0;
    for(int i=0;s[i];++i)
    {
        int p = (s[i]-'0');
        if(p%2==0)ans+=p;
    }
    cout<<ans<<'\n';
    return 0;
}