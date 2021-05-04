#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
string A[16]={"0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111"};
void solve()
{
    ll N;cin>>N;
    string s;cin>>s;
    for(ll i=0;i<N;i+=4)
    {
        string str ="";
        str += s[i];
        str += s[i+1];
        str += s[i+2];
        str += s[i+3];
        //cout<< (s[i] + s[i+1] + s[i+2] + s[i+3])<<'\n';
        for(ll j=0;j<16;++j)
        {
            if(A[j]==str)
            {
                char ch =  'a' + j ;
                cout<<ch;
                j=16;
            }            
        }
    }
    cout<<'\n';
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/