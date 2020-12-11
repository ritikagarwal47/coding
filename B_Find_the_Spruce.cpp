#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
ll N,M;
bool isvalid(ll x,ll y)
{
    if(x<0 or y<0 or x>=N or y>=M)return false;
    return true;
}
void solve()
{
    cin>>N>>M;
    ll A[N][M];
    char ch;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            cin>>ch;
            if(ch=='*')A[i][j]=1;
            else A[i][j]=0;
        }
    }
    ll ans=0;
    for(ll i=0;i<N;++i)
    {
        for(ll j=0;j<M;++j)
        {
            ans += A[i][j];
            if(A[i][j]>=1)
            {
                //ans+= A[i][j];
                // cout<<i<<' '<<j <<'\n';
                // cout<<i+1<<' '<<j-1<<'\n';
                // cout<<i+1<<' '<<j<<'\n';
                // cout<< i+1 <<' '<<j+1<<'\n';
                //bool f=true;
                //if(A[i+1])
                for(ll k=0;k<=A[i][j];++k)
                {
                    if(isvalid(i+1,j-k) and isvalid(i+1,j+k))
                    {
                        if(A[i+1][j-k]>=1 and  A[i+1][j+k]>=1)
                        {
                            A[i+1][j] = k + 1  ;
                        }
                        else break;
                    }
                    else break;
                }
                // if(f)
                // {
                //     bool f1 = true;
                //     for(ll k=0;k<=A[i][j];++k)
                //     {
                //         if(A[i+1][j-k]==0 or A[i+1][j+k]==0)
                //         {
                //             f1=false;break;
                //         }
                //     }
                //     if(f1)
                //     {
                //         A[i+1][j]=A[i][j]+1;
                //     }
                // }
            }
        }
    }
    // for(ll i=0;i<N;++i)
    // {
    //     for(ll j=0;j<M;++j)
    //     {
    //         cout<<A[i][j]<<' ';
    //     }
    //     cout<<'\n';
    // }
    cout<< ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/