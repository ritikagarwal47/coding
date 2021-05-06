#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N,T,K;cin>>N>>T>>K;
    ll l=1,r=N,c=0;
    ll mid =(l+r)/2;
    while(l<r)
    {
        if(l==r)
        {
            cout<<"! "<<l<<endl;exit(0);
        }
        
        ll a,b;
        cout<<"? "<<l<<' '<<mid<<endl;
        cin>>a;
        //cout<<"? "<<mid+1<<' '<<r<<endl;
        //cin>>b;
        ll p = mid - l + 1 - a + c;
        p+=c;
        if(p<K)
        {
            c=p;l=mid+1;mid=r;
        }
        else
        {
            mid = (l+mid)/2;
        }
    }
    cout<<l<<' '<<r<<endl;
    cout<<"! "<<l<<endl;
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/