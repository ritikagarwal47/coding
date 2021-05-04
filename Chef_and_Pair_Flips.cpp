#include<bits/stdc++.h>
using namespace std;
int main()
{
int T;cin>>T;
while(T)
{
    int n,m,e;
    cin>>n>>m>>e;
    int a[n][m],b[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>b[i][j];
        }
    }
    if((n%4==0 or (n+1)%4==0) and (m%4==0 or (m+1)%4==0))
    {
        
    }
    else cout<<"-1\n";
    T--;
}
return 0;
}