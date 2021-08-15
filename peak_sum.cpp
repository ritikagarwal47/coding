#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
int SumOfPeak(int arr[],int n)
{
    if(n==0)return -1;
    if(n==1)return arr[0];
    int ans=0;
    for(int i=0;i<n;++i)
    {
        if(i==0)
        {
            if(arr[0]>arr[1])ans+=arr[0];
        }
        else if(i==n-1)
        {
            if(arr[n-1]>arr[n-2])ans+=arr[n-1];
        }
        else if(arr[i]>arr[i+1] and arr[i]>arr[i-1])ans+=arr[i];
    }
    return ans;
}
void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i)cin>>a[i];
    cout<<SumOfPeak(a,n);
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/