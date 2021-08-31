#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll N;cin>>N;
    char A[N][N];
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<N;++j)
        {
            cin>>A[i][j];
        }
    }
    ll mn=LONG_MAX,ans=0;
    
    ll r1=-1,r2=-1;
    ll c1=-1,c2=-1;
    for(ll i=0;i<N;++i)
    {
        ll r=0,c=0;
        bool ok=true;
        for(ll j=0;j<N;++j)
        {
            if(A[i][j]=='O')
            {
                ok=false;break;
            }
            else if(A[i][j]=='.')
            {
                r1 = i;
                r2=j;
                ++r;

            }
        }
        bool ok1=true;
        for(ll j=0;j<N;++j)
        {
            if(A[j][i]=='O')
            {
                ok1=false;break;
            }
            else if(A[j][i]=='.')
            {
                c1=j;
                c2=i;
                ++c;
            } 
        }
        if(ok)
        {
            if(r==mn)ans++;
            else if(r<mn)
            {
                mn=r;
                ans=1;
            }
        }
        if(ok1)
        {
            if((c!=1 or r!=1 or (r1!=c1 and r2!=c2)) and c==mn)ans++;
            else if(c<mn)
            {
                mn=c;
                ans=1;
            }
        } 
    }
    (mn==LONG_MAX)?cout<<"Impossible\n":cout<<mn<<' '<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/