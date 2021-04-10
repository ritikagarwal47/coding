#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll fun(ll N)
{
    ll ans=0;
    while(N)N/=10,++ans;
    return ans;
}
void solve()
{
    ll N;cin>>N;
    string A[N];for(ll i=0;i<N;++i)cin>>A[i];
    //for(auto i:A)cout<<i<<' ';cout<<'\n';
    ll ans=0;
    //ll l=0;
    for(ll i=1;i<N;++i)
    {
        ll p = stoll(A[i],nullptr,10);
        ll q = stoll(A[i-1],nullptr,10);
        string a = A[i];
        string b = A[i-1];
        ll l1 = a.size();
        ll l2 = b.size();
        //cout<<p<<' '<<q<<'\n';
        if(p>q or l2<l1)continue;
        else if(p==q or l1==l2)
        {
            A[i] = A[i-1] + '0';++ans;continue;
        }
        ans += l2-l1;
        for(ll j=l1;j<l2;++j)
        {
            a+=b[j];//cout<<b[j]<<' '<<i<<' '<<j<<'\n';
        }
        //cout<<a<<'\n';
        p = stoll(a,nullptr,10);
        q = stoll(b,nullptr,10);
        if(p>q)A[i]=A[i]=to_string(p);
        else
        {
            if(p%10!=9 and (p+1)>q)++p,A[i]=to_string(p);
            else
            {
                for(ll j=l1;j<l2;++j)
                {
                    a[j]='0';//cout<<b[j]<<' '<<i<<' '<<j<<'\n';
                }
                a+='0';++ans;
                A[i]=a;
            }
            
        }
    }
   // for(auto i:A)cout<<i<<' ';cout<<'\n';
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;long a=1;
for(int t=1;t<=T;++t)
{
cout<<"Case #";
cout<<a<<':'<<' ';++a;
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/