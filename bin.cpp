#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
int fun(int *A,int X)
{
    int l =0;
    int r = 4;
    while(l<=r)
    {
        int m = (l+r)/2;
        if(A[m]<=X)
        {
            l=m+1;
        }
        else
        {
            r = m - 1;
        }
    }
    return A[l];
}
void solve()
{
    int A[5] = {1 ,3,6 ,7 ,9};
    cout<< fun(A,8);
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;       // cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/