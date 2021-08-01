#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
int sum(int n)
{
    int ans=0;
    while(n>0)
    {
        ans+=n%10;
        n/=10;
    }
    return ans;
}
bool isPrime(int n)
{
    if (n <= 1)return false;
    if (n <= 3)return true;
    if (n % 2 == 0 or n % 3 == 0)return false;
    for (int i = 5; i * i <= n; i = i + 6)
    {
        if (n % i == 0 or n % (i + 2) == 0)return false;
    }
    return true;
}
int FindDisibePrimeCount(int a,int b,int n)
{
    int ans=0;
    for(int i=a;i<=b;++i)
    {
        if(isPrime(i))
        {
            if(sum(i)%n==0)++ans;
        }
    }
    return ans;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){
    
    int a,b,n;cin>>a>>b>>n;
    cout<<FindDisibePrimeCount(a,b,n)<<'\n';
    
    
    }exit(0);
}/*Solved By:- Ritik Agarwal*/