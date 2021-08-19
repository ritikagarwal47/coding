#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m;cin>>n>>m;
    int A[n];for(int i=0;i<n;++i)cin>>A[i];
    int B[m];for(int i=0;i<m;++i)cin>>B[i];
    sort(A,A+n);sort(B,B+m);
    intersection(A,B, n, m);
}
int main(void)
{

    solve();
}