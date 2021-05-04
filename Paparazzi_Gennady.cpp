#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
struct node{
    ll f,s;
};
void solve()
{
    ll N,x;cin>>N;
    node A[N]; 
    for(ll i=0;i<N;++i)
    {
        cin>>x;
        A[i].f=i;
        A[i].s=x;
    }
    ll ans=1;
    vector<node> V;
    V.push_back(A[0]);V.push_back(A[1]);
    ll p=2;
    for(ll i=2;i<N;++i)
    {
        while(p>=2)
        {
            //node last = st.top();st.pop();--p;
            double x = ((double)V[p-1].s - (double)V[p-2].s)/(double)((double)V[p-1].f - (double)V[p-2].f);
            double y = ((double)A[i].s - (double)V[p-1].s)/(double)((double)A[i].f - (double)V[p-1].f);
            //cout<<x<<' '<<y<<'\n';
            //if()
            if(x>y)
            {
                //st.push(last);++p;
                break;
            }
            else
            {
                --p;V.pop_back();
            }
        }
        V.push_back(A[i]);++p;
        ans = max(ans,V[p-1].f - V[p-2].f );
        
    }
    cout<<ans<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/
