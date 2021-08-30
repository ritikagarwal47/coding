#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> V;
void fun(vector<int> arr, int index,vector<int> subarr)
{
    if (index == arr.size())
    {
        int l = subarr.size();
        sort(subarr.begin(),subarr.end());
        if (l != 0)V.push_back(subarr);
    }
    else
    {
        fun(arr, index + 1, subarr);
 
        subarr.push_back(arr[index]);

        fun(arr, index + 1, subarr);
    }
}
void solve()
{
    int N,l,r,x;cin>>N>>l>>r>>x;
    vector<int> A(N);
    for(int i=0;i<N;++i)cin>>A[i];
    vector<int> b;
    fun(A,0,b);
    int ans=0;
    for(int i=0;i<V.size();++i)
    {
        int n = V[i].size();
        int p = V[i][n-1] - V[i][0];
        if(n>1 and x<=p)
        {
            int s=0;
            for(int j=0;j<V[i].size();++j)
            {
                s+=V[i][j];
            }
            if(s>=l and s<=r)++ans;
        }
    }
    cout<<ans<<'\n';
}
int main()
{
    solve();
    return 0;
}