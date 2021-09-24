#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll n=0;
    ll a=1;
    while(1)
    {
        cin>>n;
        if(n==0)break;
        map<string,ll> M;
        for(ll i=0;i<=n;++i)
        {
            string s;getline(cin,s);
            string t;
            stringstream X(s);
            while (getline(X, t, ' ')){}
            //cout<<t<<' ';
            transform(t.begin(),t.end(),t.begin(),::tolower);
            M[t]++;
        }
        cout<<"List "<<a++<<":\n";
        for(auto i:M)
        {
            if(i.first=="")continue;
            cout<<i.first<<" | "<<i.second<<'\n';
        }
    } 
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/