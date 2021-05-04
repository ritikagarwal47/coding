#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll T,N,Q;cin>>T>>N>>Q;
    while (T--)
    {
        vector<ll> a;
        cout<<"1 2 3"<<endl;
        ll s=3;
        ll ans;cin>>ans;
        if(ans==2)a.push_back(1),a.push_back(2),a.push_back(3);
        else if(ans==3)a.push_back(1),a.push_back(3),a.push_back(2);
        else a.push_back(2),a.push_back(1),a.push_back(3);

        for(ll i=4;i<=N;++i)
        {
            ll f=0,l=s-1;
            while(f<l)
            {
                ll m = f + (l-f)/2;
                cout<<a[m]<<' '<<a[m+1]<<' '<<i<<endl;
                cin>>ans;
                if(ans==a[m])l=m;
                else if(ans==a[m+1])f=m+1;
                else
                {
                    a.insert(a.begin()+m+1,i);
                    s++;break;
                }
            }
            if(s!=i)
            {
                if(f==0)a.insert(a.begin(),i);
                else a.push_back(i);
                s++;
            }
        }
        for(auto i : a)cout<<i<<' ';cout<<endl;
        cin>>ans;
        if(ans==-1)return;
    }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/