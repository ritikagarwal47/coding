#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct node{
    int data;
    node  *next,*prev;
    node(int val){
        data = val;
        next = nullptr;
    }
};
void solve()
{
    int N;
    cin>>N;
    node* pre=NULL;
    node* head=NULL;
    for(int i=0;i<N;++i)
    {
        int x;
        cin>>x;
        node* new_node = new node(x);
        if(pre!=nullptr)
        {
            pre->next = new_node;
        }
        else 
        {
            head = new_node;
        }
        pre = new_node;
    }  
    while(head!=nullptr)
    {
        cout<< head->data <<' ';
        head = head->next;
    }
}
int main()
{
   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
   int T=1;       // cin>>T;
   while(T--){
    solve();
    }
    return 0;
}