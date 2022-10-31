#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;

void solve()
{
    ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
    if(x1==x2 and y1==y2)cout<<"0\n";
    else if(x1==x2)cout<< abs(y1-y2) <<'\n';
    else if(y1==y2)cout<< abs(x1-x2) <<'\n';
    else 
    {
        cout<< abs(x1-x2) + abs(y1-y2) + 2 <<'\n';
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
