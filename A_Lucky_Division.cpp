#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll N,x=0;
    cin>>N;
    ll A[10]={4,7,47,74,447,474,477,744,747,774};
    for(ll i=0;i<10;i++)
    {if(N%A[i]==0){x++;break;}}
    if(x==1){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
}