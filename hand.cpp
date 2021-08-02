#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int  n;cin>>n;
    int ans=0;
    for(int i=1;i<n;++i)
    {
        ans+=i;
    }
    cout<<ans<<'\n';
}
int main()
{
    solve();
    return 0;
}