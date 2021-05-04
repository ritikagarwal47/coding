#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
bool prime[1000005];
vector<int> ans;
vector<ll> pre(1000005);
 map<ll,ll> mep;
void SieveOfEratosthenes(int n)
{
    memset(prime, true, sizeof(prime));
 
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true) 
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    for (int p = 2; p <= n; p++)
        if (prime[p])
            ans.push_back(p);
    
    pre[0]=0;
   
    for(int i=1;i<ans.size();i++)
    {
        if((ans[i]-ans[i-1])==2)
        pre[i]=pre[i-1]+1;
        else pre[i]=pre[i-1];//and prime[i-1]==1 and )
        // cout<<pre[i]<<" ";
        mep[ans[i]]=pre[i];
    }
}
int find(int t)
{
    int i=0;
    int j=ans.size()-1;
    int mid=(i+j)/2;
    int ok=-1;
    while(i<=j)
    {   
        int mid=(i+j)/2;
        if(ans[mid]==t)
        return ans[mid];
        if(ans[mid]<t)
        {
                ok=mid;
                i=mid+1;
        }
        else
        {
            j=mid-1;
        }
        
    }
    return ans[ok];
}
void solve()
{
    int n;
      cin>>n;
      if(n<5)
      {
          cout<<"0\n";
          return;;
      }
      int lower=find(n);
    //   deb2(lower,n);
      cout<<mep[lower]<<"\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
SieveOfEratosthenes(1000000);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/