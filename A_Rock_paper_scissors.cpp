#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a,b;cin>>a>>b;
    if(a==b)cout<<a;
    else
    {
        if((a==1 and b==0) or (a==0 and b==1))cout<<"2";
        else if((a==1 and b==2) or (a==2 and b==1))cout<<"0";
        else cout<<"1";
    }   
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/