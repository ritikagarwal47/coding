#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    string s;cin>>s;
    ll c=0,v=0;
    map<char,ll> V,C;
    for(auto i:s)
    {
        if(i=='A' or i=='E' or i=='I' or i=='O' or i=='U')
        {
            ++v;
            V[i]++;
        }
        else
        {
            ++c;
            C[i]++;
        }
    } 
    ll ans1=0;
    ll mx=0;char ch;
    for(auto i:V)
    {
        if(mx<i.second)
        {
            mx = i.second;
            ch=i.first;
        }
    }
    for(auto i:s)
    {
        if(i=='A' or i=='E' or i=='I' or i=='O' or i=='U')
        {
            if(i!=ch)ans1+=2;
        }
        else ++ans1;
    }
    ll ans2=0;
    mx=0;ch=' ';
    for(auto i:C)
    {
        if(mx<i.second)
        {
            mx = i.second;
            ch=i.first;
        }
    }
    for(auto i:s)
    {
        if(i=='A' or i=='E' or i=='I' or i=='O' or i=='U')++ans2;
        else
        {
            if(i!=ch)ans2+=2;
        }
    }
    cout<<min(ans1,ans2)<<endl;
}
int main(void)
{
//ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
// #ifndef ONLINE_JUDGE
//         freopen("input.txt","r", stdin) ;
//         freopen("output.txt","w", stdout) ;
//         freopen("error.txt","w", stderr) ;
// #endif
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
//cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
cout<<"Case #"<<t<<": ";
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/