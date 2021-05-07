#include<bits/stdc++.h>

int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--)
{
    ll A,B;cin>>A>>B;
    if(B==1)
    {
        cout<<"NO\n";break;//return;
    }
    if(B==2)
    {
        cout<<"YES\n";
        cout<<A<<' '<<A*(B+1)<<' '<<A*B*2<<'\n'; break;
       // return;
    }
    cout<<"YES\n";
    cout<<A<<' '<<A*(B-1)<<' '<<A*B<<'\n'; 
    }exit(0);
}