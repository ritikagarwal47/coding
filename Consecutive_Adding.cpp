#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
ll A[1000+3][1000+3],B[1000+3][1000+3];
void pt(ll R,ll C)
{
    for(ll i=0;i<R;++i)
    {
        for(ll j=0;j<C;++j)cout<<A[i][j]<<' ';cout<<'\n';
    }
}
bool check(ll R,ll C,ll X)
{
    if(R<X and C<X)return false;
        
        for(ll i=0;i<R;++i)
        {
            for(ll j=0;j<C-X+1;++j)
            {
                if(A[i][j]!=B[i][j])
                {
                    ll diff=B[i][j]-A[i][j];
                    for(ll k=j;k<j+X;k++)
                    {
                        A[i][k]+=diff;
                    }
                }
                if(j==C-X)
                {
                    for(ll k=C-X+1;k<C;k++)
                    {
                        if(A[k][i]!=B[k][i]){}//return false;
                    }
                }
                
            }
        }
        for(ll i=0;i<C;i++)
        {
            for(ll j=0;j<R-X+1;j++)
            {
                if(A[j][i]!=B[j][i])
                {
                    ll diff=B[j][i]-A[j][i];
                    for(ll k=j;k<j+X;k++)
                    {
                        A[k][i]+=diff;
                    }
                }
                if(j==R-X)
                {
                    for(ll k=R-X+1;k<R;k++)
                    {
                        if(A[k][i]!=B[k][i]){}//return false;
                    }

                }

            }
        }
        for(ll i=0;i<R;++i)
        {
            for(ll j=0;j<C;++j)
            {
                if(A[i][j]!=B[i][j])return false;
            }
        }
    return true;
    
    // for(ll i=0;i<R;++i)
    // {
    //     for(ll j=0;j<C-X+1;++j)
    //     {
    //         if(A[i][j]!=B[i][j])
    //         {
    //             ll diff=A[i][j]-B[i][j];
    //             for(ll k=i;k<i+X;k++)A[i][k]+=diff;
    //         }
    //         // pt(R,C);
    //     }
    // }
    // // pt(R,C);
    // for(ll i=0;i<C;i++)
    // {
    //     for(ll j=0;j<R-X+1;j++)
    //     {
    //         if(A[j][i]!=B[j][i])
    //         {
    //             ll diff=A[j][i]-B[j][i];
    //             for(ll k=j;k<j+X;k++)A[k][i]+=diff;
    //         }
    //         if(j==R-X)
    //         {
    //             for(ll k=R-X+1;k<R;k++)
    //             {
    //                 if(A[k][i]!=B[k][i])return false;
    //             }
    //         }
    //     }
    // }
    // return true;
}
void solve()
{
    ll R,C,X;cin>>R>>C>>X;
    for(ll i=0;i<R;++i)
    {
        for(ll j=0;j<C;++j)cin>>A[i][j];
    }
    bool ok = true;
    for(ll i=0;i<R;++i)
    {
        for(ll j=0;j<C;++j)
        {
            cin>>B[i][j];
            if(A[i][j]!=B[i][j])ok=false;
        }
    }
    if(ok)
    {
        cout<<"Yes\n";return;
    }
    ok=check(R,C,X);
    if(ok)cout<<"Yes\n";
    else cout<<"No\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/