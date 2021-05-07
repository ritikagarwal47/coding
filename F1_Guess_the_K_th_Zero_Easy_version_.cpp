#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,T,K;cin>>N>>T>>K;
    ll l=1,r=N,c=0;
    
    while((r-l)>=1)
    {
        ll a,b;
        ll mid =(l+r)/2;
        cout<<"? "<<l<<' '<<mid<<endl;
        cin>>a;
        ll p = (mid - l + 1) - a;//cout<<p <<' ';
        p+=c;
        if(p<K)
        {
            c=p;l=mid+1;
        }
        else
        {
            r=mid;
        }
    }
    //cout<<l<<' '<<r<<endl;
    cout<<"! "<<r<<endl;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/