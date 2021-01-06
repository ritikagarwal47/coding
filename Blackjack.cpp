#include <bits/stdc++.h>
using namespace std;
typedef long long int p;
bool kya_apke_toothpaste_me_namak_h(p a[],p x, p y,p n)
{
    p i;
    p s=0;
    for(i=0;i<n;i++)
    {
        s+=a[i]; 
        if(s>=x and s<=y)return true;
    }
    return false;
}

bool hot_ass(p A[],p x, p y, p n,p i)
{
    if(i==n)return true;

}
void fucking_blackjack(p A[],p x,p y,p n){
    p a;
    if(kya_apke_toothpaste_me_namak_h(A,x,y,n))
    {
        cout<<"0\n";return;
    }
    if(!hot_ass(A,x,y,n))
    {

    }
    p i,j,k;
    p pre[n+1]={0};
    pre[0]=0;
    //map<p,p> mp;
    for(i=0;i<n;i++)
    {
        //mp[A[i]]= mp[A[i]] + 1;
        pre[i+1] = pre[i] + A[i];
    }
    for(i=1;i<=n;i++)
    {
        if(pre[i]>=x and pre[i]<=y)
        {
            a=i-1;
            break;
        }
    }
    p st[a],ra[n-a];
    for(i=0;i<a;i++)st[i]=A[i];
    for(i=a;i<n;i++)ra[i-a] = A[i];
    sort(st,st+a);
    sort(ra,ra+n-a);
    p h;    
    i=0;
    j=a;
    while(i<a and j<n)
    {
        h = pre[a+1];
        h = h - st[i];
        h = h + ra[j];
        if(h>=x and h<=y)
        {
            cout<<"1\n";return;
        }
        if(h>y)i+=1;
        else j+=1;
    }
    cout<<"-1\n";
}
int main() {
	p T;cin>>T;
	p t;
	for(t=0;t<T;++t)
	{
	    p n,x,y,i;
	    scanf("%lld %lld %lld",&n,&x,&y);
        p a[n];
        //p b[m];
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        fucking_blackjack(a,x,y,n);
	}
	return 0;
}
