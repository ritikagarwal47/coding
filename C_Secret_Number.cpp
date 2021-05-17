#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
// set<string> st;
// vector<char> A,B;
// void fun(ll N,string c,bool ok)
// {
//     if(N==4)
//     {
//         st.insert(c);return;
//     }
//     for(ll )
// }
ll fact(ll N)
{
    if(N<=1)return 1;
    return N*fact(N-1);
}
ll C(ll N,ll R)
{
    return fact(N)/(fact(R)*fact(N-R));
}
void solve()
{
    string s;cin>>s;
    ll a=0,b=0;
    
    for(auto i:s)
    {
        if(i=='o')++a;//,A.push_back(i);
        else if(i=='?')++b;//,B.push_back(i);
    } 
    if(a>4)
    {
        cout<<"0\n";return;
    }
    ll A = fact(a);
    ll B = C((4-a)*(a+b),(4-a));
    cout<<A<<' '<<a<<' '<<b<<' '<<B<<'\n';
    //fun()
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/