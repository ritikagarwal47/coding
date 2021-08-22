#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    } 
    int l = 0,h=n-1,m=1;
    while(l<h and m<=h)
    {
        if(a[l]==0)++l;
        else if(a[h]==2)--h;
        else if(a[l]==2 and a[h]==0)swap(a[l],a[h]);
        else if(a[m]==1)++m;
        else if(a[m]==0)swap(a[m],a[l]),++l;
        else if(a[m]==2)swap(a[m],a[h]),--h;

        if(m<l)m=l+1;
    }
    for(int i=0;i<n;++i)
    {
        cout<<a[i]<<' ';
    }
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/