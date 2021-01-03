#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    ll a=0,b=0,x;
    while(N--)
    {
        cin>>x;
        if(x==25)++a;
        else if(x==50)
        {
            ++b;
            if(a>=1)--a;
            else
            {
                cout<<"NO\n";return;
            }
            
        }
        else
        {
            if(a>=1 and b>=1)--a,--b;
            else if(a>=3)a-=3;
            else
            {
                cout<<"NO\n";return;
            }
        }
    }
    cout<<"YES\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/