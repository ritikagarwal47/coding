#include<bits/stdc++.h>
using namespace std;
int main(void)
{
int T=1;        cin>>T;
while(T--)
{
    int K;cin>>K;
    int p = 100 - K;
    int  g = __gcd(K,p);
    cout<<(K/g + p/g)<<'\n';
}
}