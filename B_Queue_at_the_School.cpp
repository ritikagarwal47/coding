#include<bits/stdc++.h>
#include<string.h>
#define ll long long int
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll N,T;
    cin>>N>>T;
    char a[N];
    for(int i=0;i<N;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<T;i++)
    {
        for(int j=0;j<N-1;j++)
        {
            if(a[j]=='B'&&a[j+1]=='G')
            {
                a[j] = 'G';
                a[j+1] = 'B';
                j++;
            }
        }
    }
    for(int i=0;i<N;i++){cout<<a[i];}
}