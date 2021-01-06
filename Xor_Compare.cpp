#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll X,Y,N;cin>>X>>Y>>N;
    if(X==Y)// or min(X,Y)>N)
    {
        cout<<"0\n";return;
    }
    // if(min(X,Y)>N)
    // {
    //         ll ans=0;
    // ll p = sqrt(N);//,sqrt(max(X,Y)));
    // for(ll i=0;i<=p;++i)
    // {
    //     if((X^i)<(Y^i))++ans;
    // }
    // //cout<< ans << ' '<<p<<'\n';
    // cout<< N + abs(ans- p) <<'\n';
    // }
    if(X<Y)
    {
    ll ans=0;
    ll p = sqrt(N);//,sqrt(max(X,Y)));
    for(ll i=0;i<=p;++i)
    {
        if((X^i)<(Y^i))++ans;
    }
    cout<< ans << ' '<<p<<'\n';
    cout<< ans*p <<'\n';
    }
    else
    {
        ll a = X;
        X=Y;
        Y = a;
        ll ans=0;
        ll p = sqrt(N);
        for(ll i=0;i<=p;++i)
        {
            if((X^i)<(Y^i))++ans;
        }
        //cout<< ans << ' '<<p<<'\n';
        if(N<=ans*p)cout<<"0\n";
        else if(min(X,Y)>N)cout<< N + abs(ans- p) <<'\n';
        else cout<< N - ans*p + 1 <<'\n';
    }
    

}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/