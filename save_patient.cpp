#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int N;cin>>N;
    int A[N],B[N];
    for(int i=0;i<N;++i)cin>>A[i];
    for(int i=0;i<N;++i)cin>>B[i];
    sort(A,A+N);sort(B,B+N);
    bool ok=true;
    for(int i=0;i<N;++i)
    {
        if(A[i]<=B[i])ok=false;
    }
    if(ok)cout<<"Yes\n";
    else cout<< "No\n";
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int T=1;        cin>>T;
   while(T--){
    solve();
    }
    return 0;
}