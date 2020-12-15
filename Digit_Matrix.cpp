#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;cin>>N;
    if(N==1)
    {
        ll x;cin>>x;
        ll A[2][2]={0};
        if(x>9)A[0][0]=9,x-=9;
        else A[0][0]=x,x=0;
        if(x>9)A[0][1]=9,x-=9;
        else A[0][1]=x,x=0;
        if(x>9)A[1][0]=9,x-=9;
        else A[1][0]=x,x=0;
        if(x>9)A[1][1]=9,x-=9;
        else A[1][1]=x,x=0;

        for(ll i=0;i<2;++i)
        {
            for(ll j=0;j<2;++j)cout<<A[i][j];cout<<'\n';
        }
    }
    else if(N==2)
    {
        ll a,b,c,d;cin>>a>>b>>c>>d;
        ll A[3][3]={0};
        ll mn = min(a,min(b,min(c,min(d,9LL))));
        A[1][1]=mn;
        a-=mn;
        b-=mn;
        c-=mn;
        d-=mn;
        if(a>9)A[0][0]=9,a-=9;
        else A[0][0]=a,a=0;
        if(b>9)A[0][2]=9,b-=9;
        else A[0][2]=b,b=0;
        if(c>9)A[2][0]=9,c-=9;
        else A[2][0]=c,c=0;
        if(d>9)A[2][2]=9,d-=9;
        else A[2][2]=d,d=0;

        for(ll i=0;i<3;++i)
        {
            for(ll j=0;j<3;++j)cout<<A[i][j];cout<<'\n';
        }
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/