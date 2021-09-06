 
#define ll long long int
using namespace std;
void solve()
{
    vector<pair<int,int>> V;
    for(int i=0;i<n;++i)
    {
        V.push_back({arr[i],i});
    }
    sort(V.begin(),V.end());
    int i=0,j=n-1;
    while(i<j)
    {
        int p = V[i].first + V[j].first;
        int ans= V[i].second + V[j].second;
        if(p==target)return ans;
        else if(p>target)--j;
        else ++i;
    }
    return -1;
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int T=1;        cin>>T;
   while(T--){
    solve();
    }
    return 0;
}