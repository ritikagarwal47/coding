#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll x,Q;cin>>x>>Q;
    while(Q--)
    {
        ll X;cin>>X;
        if(X==1)
        {
            ll y;cin>>y;
            y+=1;
            if(x&(1<<y))cout<<"ON\n";
            else cout<<"OFF\n";
        }
        else if(X==2)
        {
            ll y;cin>>y;
            x |= (1<<y);
        }
        else if(X==3)
        {
            ll y;cin>>y;
            if(x&(1<<y))x ^= (1<<y);
        }
        else
        {
            ll y,z;cin>>y>>z;
            ll a=0,b=0;
            a |= x&(1<<y);
            b |= x&(1<<z);
            if(b)
            {
                x |= (1<<y);
            }
            else 
            {
                if(x&(1<<y))x ^= (1<<y);
            }
            if(a)
            {
                x |= (1<<z);
            }
            else
            {
                if(x&(1<<y))x ^= (1<<y);
            }
            
        }
        cout<<x<<'\n';
        

    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/