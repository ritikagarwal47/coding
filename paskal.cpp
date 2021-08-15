#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void fun(int n)
{
    vector<int> ans;
    int cur=1;
    int num = n-1,d=1;
    for(int i=0;i<n;++i)
    {
        int c = cur;
        ans.push_back(c);
        cur = (c*num)/d;
        num-=1;
        d+=1;
    }
    for(int i=0;i<n;++i)
    {
        cout<<ans[i]<<' ';
    }
}
void solve()
{
    int n;
    cin>>n;
    fun(n);
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/