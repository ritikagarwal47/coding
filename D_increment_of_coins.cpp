#include<bits/stdc++.h>
#include <iomanip>      
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    double a,b,c;cin>>a>>b>>c;
    double s = a + b + c ;
    long double ans = (100 - a)*(a/s) + (100-b)*(b/s) + (100-c)*(c/s) ;
    cout<<fixed<<setprecision(9)<< ans;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/