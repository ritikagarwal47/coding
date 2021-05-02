#include<iostream>
#include<math.h>
using namespace std;
void solve()
{
    long long  N;
    cin>>N;
    long long a = sqrt(N);
    long long b = sqrt(N/2);
    (a*a==N || b*b==N/2)?cout<<"YES\n":cout<<"NO\n";  
}
int main(void)
{
int T=1;        cin>>T;
for(int t=1;t<=T;++t){
//cout<<'C'<<'a'<<'s'<<'e'<<' '<<'#'<<t<<':'<<' ';
solve();
}
return 0;
}