#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll X,Y;cin>>X>>Y;
    if(X==Y)cout<<"0\n";
    else if(X<Y)
    {
        ll d = Y - X;
        if(d&1)cout<<"1\n";
        else 
        {
            d/=2;
            if(d&1)cout<<"2\n";
            else cout<<"3\n";
        }
    }
    else
    {
        ll d = X - Y;
        if(d&1)cout<<"2\n";
        else cout<<"1\n";
    }
    
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/