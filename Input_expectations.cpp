#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    bool f1=true,f2=false,f3=false;;
    ll N=0;
    ll ans=0;
    ll T=0,num=0,a=0;
    while(cin>>N)
    {
        if(f1)
        {
            T=N;f1=false;
            f2=true;
        }
        else if(f2)
        {
            num=N;--T;
            f3=true;
            f2=false;
        }
        else
        {
            a=N;
            --num;
        }
        if(num==0)f2=true;
        //cout<< N<<' '<< T <<' '<<num <<'\n';
    }
    //cout<< T <<' '<< num<<'\n';
    cout<< T + num <<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/