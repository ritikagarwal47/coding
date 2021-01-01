#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
void solve()
{
    ll N;scanf("%d", &N);
    for(ll i=0;i<2*N - 1;++i)
    {
        //ll a = N;
        for(ll j=0;2*N -  1;++j)
        {
            //cout<< a <<' ';
            ll mn= min(i,j);
            mn = min(mn,2*N-i-2);
            mn = min(mn,2*N-j-2);
            printf("%d ",N - mn);
        }
        printf("\n");
    }
}
int main(void)
{
//ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/