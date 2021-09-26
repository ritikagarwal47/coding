#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    sort(c.begin(),c.end());
    //cout<<a<<' '<<b<<' '<<c<<'\n';
    int ans = (a[3]-'0') + (b[3]-'0') + (c[3]-'0') - (a[2]-'0') - (b[2] - '0') - (c[2]-'0');
    cout<<ans<<'\n';
}