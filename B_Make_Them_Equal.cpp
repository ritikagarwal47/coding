#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
      int n;
      cin>>n;
      int ar[n];
      set<int> st;
      for(int i=0;i<n;i++) cin>>ar[i],st.insert(ar[i]);
      sort(ar,ar+n);
      map<int,int> mep;
      for(int i=0;i<n-1;i++)
      {   
          if((ar[i+1]-ar[i])==0) continue;
          mep[ar[i+1]-ar[i]]++;
      }
      if(st.size()==2)
      {
         int sum=0;
         for(auto i:st) sum+=i;
         sum=sum/2;
         int diff1,diff2;
         int j=0;
         for(auto i:st)
         {   
             if(j%2==0)
             {
                 j++;
                 diff1=abs(sum-i);
             }
             else
             
             diff2=abs(sum-i);
         }
         if(diff1==diff2)
         {
             cout<<diff1<<"\n";
             return;
         }
         else
            {
                cout<<"-1\n";
                return;
            }
      }
      if(mep.size()==1)
      {   
          for(auto i:mep)
          {
              cout<<i.first<<"\n";
          }
      }
      else if(mep.size()==0)
      {
          printf("0\n");
      }
      else
      {
          cout<<"-1\n";
          return;
      }
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        //cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/