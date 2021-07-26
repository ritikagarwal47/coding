#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
int fibo(int n)
{
    if(n==1)return 1;
    if(n==2)return 1;
    int a=1,b=1;
    for(int i=2;i<n;++i)
    {
        int c = a + b;
        a = b;
        b = c;
    }
    return b;
}
void solve()
{
    int n;
    cin>>n;
    cout<< fibo(n) <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/