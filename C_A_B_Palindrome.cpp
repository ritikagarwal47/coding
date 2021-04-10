#include<bits/stdc++.h>
#define ll long long int
using namespace std;
const int mod=1e9+7;
//The end result of coders personal growth is,there codes becomes there documentation
void solve()
{
    ll a,b;cin>>a>>b;
    ll  aa=a,bb=b;string str;cin>>str;
        ll  n=str.size();
        for(auto index:str)
        {
            if(index=='0') a--;
            if(index=='1') b--;
        }
        ll  index=0,pre=n-1;
        while(index<pre)
        {
            if(str[index]=='?' and str[pre]=='?')
            {
                index++;
                pre--;
                continue;
            }
            if(str[index]=='?')
            {
                if(str[pre]=='0')
                {
                    if(a>0)
                    {
                        a--;
                        str[index]='0';
                    }
                    else
                    {
                        cout<<"-1\n";
                        return;
                    }
                }
                else
                {
                     if(b>0)
                    {
                        b--;
                        str[index]='1';
                    }
                    else
                    {
                        cout<<"-1\n";
                        return;
                    }
                }
            }
            else if(str[pre]=='?')
            {
                if(str[index]=='0')
                {
                    if(a>0)
                    {
                        a--;
                        str[pre]='0';
                    }
                    else
                    {
                        cout<<"-1\n";
                        return;
                    }
                }
                else
                {
                     if(b>0)
                    {
                        b--;
                        str[pre]='1';
                    }
                    else
                    {
                        cout<<"-1\n";
                        return;
                    }
                }
            }
            index++;
            pre--;

        }

        index=0;
        pre=n-1;
        while(index<pre)
        {
            if(str[index]=='?' and str[pre]=='?')
            {
                if(a<2 and b<2)
                {
                    cout<<"-1\n";
                    return;
                }
                if(a>=2)
                {
                    str[index]='0';
                    str[pre]='0';
                    a-=2;
                }
                else
                {
                    str[index]='1';
                    str[pre]='1';
                    b-=2;
                }
            }
            index++;pre--;
        }
        if(str[index]=='?')
        {
            if(a<1 and b<1)
            {
                cout<<"-1\n";
                return;
            }
            if(a>=1)
            {
                str[index]='0';
            }
            else
            {
                str[index]='1';
            }
        }
        index=0;
        pre=n-1;
        while(index<=pre)
        {
            if(str[index]!=str[pre])
            {
                cout<<"-1\n";
                return;
            }
            index++;
            pre--;
        }
        ll ca=0,cb=0;
        for(auto index:str)
        {
            if(index=='0') ca++;
            else if(index=='1') cb++;
        }
        if(ca!=aa||cb!=bb)
        {
            cout<<"-1\n";
            return;
        }
        cout<<str<<"\n";  
}
int main(void)
{
ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
int T=1;        cin>>T;
while(T--){solve();}exit(0);
}/*Solved By:- Ritik Agarwal*/