#include<bits/stdc++.h>
#define ll long long int
#define INF 2e18
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll q,d;
void solve()
{
    ll l=-INF,h=INF;
    ll x1 = l,x2=h;
    ll cur=1;
    string s;
    while(l<=h)
    {
        ll m = (l+h)/2;
        if(cur==1)
        {
            cout<<"1 "<<m<<' '<<x1<<endl;
        }
        else
        {
            cout<<cur<<' '<<m<<' '<<x1<<' '<<m<<' '<<x2<<endl;
        }
        cin>>s;
        if(s == "O")break;
        if(s[0] == 'X')cur = 2;
	    if(s[0] == 'N')l = m + 1;
	    if(s[0] == 'P')h = m-1;
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T>>q>>d;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/