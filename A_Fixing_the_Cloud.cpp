#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    if(N==2)
    {
        cout<<"1\n1\n0 1 0";
    }
    else if(N==3)
    {
        cout<<"3\n1\n2 0 1\n1\n1 2 2\n1\n0 1 0";
    }
    else
    {
        cout<<"3\n2\n2 0 1\n2 0 4\n3\n0 1 5\n0 2 0\n3 4 2\n1\n1 2 3";
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/