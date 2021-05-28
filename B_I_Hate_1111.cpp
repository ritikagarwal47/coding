#include<iostream>
using namespace std;
int main()
{
int T=1;       
 cin>>T;
while(T--)
{
    long N;cin>>N;
    long a = N%11;
    long  b = N/11;
    if(b>=a*10)cout<<"YES\n";
    else cout<<"NO\n";
}
}