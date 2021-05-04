#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
// I'm in Love with Experience ^_^
vector<ll> pubg_is_back;

void for_prime(int limit, vector<int> &prime)
{
    
    bool mark[limit+1];
    memset(mark, true, sizeof(mark));
    for (int p=2; p*p<limit; p++)
    {
        if (mark[p] == true)
        {
           
            for (int i=p*p; i<limit; i+=p)
                mark[i] = false;
        }
    }









    for (int p=2; p<limit; p++)
    {
        if (mark[p] == true)
        {
            prime.push_back(p);
            pubg_is_back.push_back(p);
        }
    }
}
 
void Sieve()
{
   int n =4000000;
    int limit = floor(sqrt(n))+1;
    vector<int> prime; 
    for_prime(limit, prime); 
    int low = limit;
    int high = 2*limit;
    while (low < n)
    {


        if (high >= n) 
           high = n;
        bool mark[limit+1];
        memset(mark, true, sizeof(mark));



        for (int i = 0; i < prime.size(); i++)
        {
          
            int loLim = floor(low/prime[i]) * prime[i];



            if (loLim < low)
                loLim += prime[i];
            for (int j=loLim; j<high; j+=prime[i])




                mark[j-low] = false;
        }
            for (int i = low; i<high; i++)




            if (mark[i - low] == true)



                pubg_is_back.push_back(i);
 
        low = low + limit;
        high = high + limit;
    }
}

void solve()
{
    ll N;cin>>N;
    ll A[N];for(ll i=0;i<N;++i)cin>>A[i];
    map<ll,ll> M;
    ll x=0;
    for(ll i=0;i<N;++i)
    {
        if(M[A[i]]==0)M[A[i]]=pubg_is_back[x++];//,x++;
    }
    for(ll i=0;i<N;++i)cout<<M[A[i]]<<' ';cout<<'\n';
}








int main(void)
{



ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
Sieve();





int T=1;        cin>>T;
while(T--){solve();}exit(0);






}/*Solved By:- Ritik Agarwal*/