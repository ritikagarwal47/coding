#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;

bool valid(int N)
{
    map<int ,int > M;
    int p=0;
    while(N>0)
    {
        p=N%10;
        M[p]++;N/=10;
        //p=N%10;
    }
    int c=M[p];
   // cout<<c<<'\n';
    for(auto i : M)
    {
        if(i.second!=c)return false;
    }
    return true;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int T=1;//cin>>T;
    while(T--)
    {
        int N;cin>>N;
        int A[N]; for(int i=0;i<N;++i)cin>>A[i];
        int st=0,ut=0;
        for(int i=0;i<N;++i)
        {
            if(valid(A[i]))
            {
                st += A[i];
                //printf("%d ",A[i]);
            }
            else ut+=A[i];//,cout<<A[i]<<'\n';
        }
       // cout<<st<<' '<<ut<<'\n';
        printf("%d",st - ut);
    }
    return 0;
}
