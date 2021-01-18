#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    //ll N;cin>>N;
    string N;cin>>N;
    if(N.size()<=1)
    {
        cout<<"-1\n";return;
    }
    ll s=0;//,a=N;
    ll o=0,e=0;
    for(ll i=0;N[i];++i)
    {
        ll p= (N[i]-'0');
        if(p&1)++o;
        else ++e;
        s+=p;
        //s+=a%10;a/=10;
    }
    if(s%2==0 and o>=1)cout<<"0\n";
    else if(s&1 and o>1)cout<<"1\n";
    else cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/