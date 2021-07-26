#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    int ans=0;
    for (int i = 0; i < n-1; i++)
    {
        int p  = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[p])p= j;
        }
        swap(a[p],a[i]);
        if(i!=p)++ans;
    }
    //for(int i=0;i<n;++i)cout<<a[i]<<' ';
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/