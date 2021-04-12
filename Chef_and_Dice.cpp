#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    if(N==1)cout<<"20\n";
    else if(N==2)cout<<"36\n";
    else if(N==3)cout<<"51\n";
    else if(N==4)cout<<"60\n";
    else
    {
        ll p = (N/4)*44;
        ll r = N%4;
        if(r==0)p+=16;
        else if(r==1)p+= 12 + 20;
        else if(r==2)p+= 8 + 36;
        else p+= 4 + 51;
        cout<<p<<'\n';
    } 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/