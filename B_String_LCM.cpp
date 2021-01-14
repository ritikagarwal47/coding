#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
long long int  gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
 
// Function to return LCM of two numbers 
long long int  lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
void computeLPSArray(char str[], int M, int lps[]) 
{ 
    int len = 0; //lenght of the previous longest prefix suffix 
    int i; 
  
    lps[0] = 0; //lps[0] is always 0 
    i = 1; 
  
    // the loop calculates lps[i] for i = 1 to M-1 
    while (i < M) 
    { 
       if (str[i] == str[len]) 
       { 
           len++; 
           lps[i] = len; 
           i++; 
       } 
       else // (pat[i] != pat[len]) 
       { 
          if (len != 0) 
          { 
             // This is tricky. Consider the example AAACAAAA 
             // and i = 7. 
             len = lps[len-1]; 
  
             // Also, note that we do not increment i here 
          } 
          else // if (len == 0) 
          { 
             lps[i] = 0; 
             i++; 
          } 
       } 
    } 
} 
  
// Returns true if str is repetition of one of its substrings 
// else return false. 
bool isRepeat(char str[]) 
{ 
    // Find length of string and create an array to 
    // store lps values used in KMP 
    int n = strlen(str); 
    int lps[n]; 
  
    // Preprocess the pattern (calculate lps[] array) 
    computeLPSArray(str, n, lps); 
  
    // Find length of longest suffix which is also 
    // prefix of str. 
    int len = lps[n-1]; 
  
    // If there exist a suffix which is also prefix AND 
    // Length of the remaining substring divides total 
    // length, then str[0..n-len-1] is the substring that 
    // repeats n/(n-len) times (Readers can print substring 
    // and value of n/(n-len) for more clarity. 
    return (len > 0 && n%(n-len) == 0)? true: false; 
} 
void solve()
{
    string s1,s2;cin>>s1>>s2;
    
    string ans="",temp="",res="";
    bool ok1=false;
    for(ll i=0;i<s1.length()-1;i++)
    {
        temp+=s1[i];
        if(s1.length()%temp.length()==0)
        {
            res="";
            for(ll j=1;j<=(ll)(s1.length()/temp.length());j++)res+=temp;
            if(res==s1)
            {
                ok1=true;break;
            }
        }
    }
    if(!ok1)
    {
        res=s1;
        //cout<<"-1\n";return;
    }
    string temp1="",res1="";
    bool ok2=false;
    //cout<<temp<<' '<<res<<'\n';
    for(ll i=0;i<s2.length()-1;i++)
    {
        temp1+=s2[i];
        if(s2.length()%temp1.length()==0)
        {
            res1="";
            for(ll j=1;j<=(ll)(s2.length()/temp1.length());j++)res1+=temp1;
            if(res1==s2)
            {
            break;
            }
        }
    }
    if(!ok2)
    {
        res1=s2;
        //cout<<"-1\n";return;
    }
    if(!ok1 and !ok2)
    {
        cout<<"-1\n";return;
    }
    //cout<<temp1<<' '<<temp<<'\n';
    if(temp==temp1)
    {
        ll a = s1.size()/temp.size();
        ll b = s2.size()/temp.size();
        ll c = lcm(a,b);
        //cout<<a<<' '<<b<<' '<<c<<'\n';
        for(ll i=0;i<c/temp.size();++i)cout<<temp;cout<<'\n';
        return ;
    }
    if(temp==s2)
    {
        ll a = s1.size();//temp.size();
        ll b = s2.size()/temp.size();
        ll c = lcm(a,b);
        //cout<<a<<' '<<b<<' '<<c<<'\n';
        for(ll i=0;i<c/temp.size();++i)cout<<temp;cout<<'\n';
        return ;
    }
    if(temp1==s1)
    {
        ll a = s1.size()/temp1.size();
        ll b = s2.size();//temp1.size();
        ll c = lcm(a,b);
        //cout<<a<<' '<<b<<' '<<c<<'\n';
        for(ll i=0;i<c/temp1.size();++i)cout<<temp1;cout<<'\n';
        return ;
    }
    cout<<"-1\n";
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/