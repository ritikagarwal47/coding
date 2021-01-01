#include <stdio.h>
#define ll long long int
//using namespace std;
//const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll abs(ll a)
{
    if(a<0)return -a;
    return a;
}
void solve()
{
    ll a,b;scanf("%d %d", &a, &b);
    printf("%d\n%d",a+b,abs(a-b));
    
}
int main(void)
{
//ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}//exit(0);
}/*Solved By:- Ritik Agarwal*/