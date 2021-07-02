#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a,b,c;cin>>a>>b>>c;
    if(c&1 and (a<0 or b<0))
    {
        if(a<0 and b<0) 
        {
            a = abs(a);
            b = abs(b);
            if(a==b)cout<<"=";
            else (a>b)?cout<<">":cout<<"<";
        }
        else if(a<0 or b<0)
        {
            if(a==b)cout<<"=";
            else (a>b)?cout<<">":cout<<"<";
        }
        return;
    }  
    a = abs(a);
    b = abs(b);
    if(a==b)cout<<"=";
    else (a>b)?cout<<">":cout<<"<";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/