#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll l,r;
ll sabka_baap(ll N)
{
    if(N==0)return 1;
    ll k=N,ct=0;
    while(k)k/=2,ct++;
    if((1<<(ct-1))==N)return N-1;
    return (1<<(ct))-N-1;
}
void fun()
{
    queue<pair<ll,ll>>Q;Q.push({l,0});
    map<ll,ll> M;
    while(!Q.empty())
    {
        pair<ll,ll> c=Q.front();Q.pop();
        if(M[c.first]!=0 and  M[c.first]<c.second)
        {
            ll p  = 2*l*l*l;
            continue;
        }
        if(c.first>(1<<16))
        {
            ll p  = 2*l*l*l;
            continue;
        }
        if(M[r]!=0 and M[r]<c.second)
        {
            ll p  = 2*l*l*l;
            continue;
        }
        M[c.first]=c.second;
        Q.push(make_pair(c.first*2,c.second+1));
        Q.push(make_pair(sabka_baap(c.first),c.second+1));
    }
    if(M[r]!=0)cout<<M[r]<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
}
void solve()
{
    string s,t;cin>>s>>t; 
    l=0;
    for(ll i=0;s[i];++i)
    {
        l*=2;l+=(s[i]-'0');
    }
    r=0;
    for(ll i=0;t[i];++i)
    {
        r*=2;r+=(t[i]-'0');
    }
    if(l==r)
    {
        cout<<"0";return;
    }
    fun();
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/