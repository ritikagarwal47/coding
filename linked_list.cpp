#include<bits/stdc++.h>
#define ll long long int
using namespace std;
struct node{
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
node* fun(node* head1 , node* head2)
{
    node* head = NULL;
    int carry = 0;
    node* curr = NULL;
    node* prev = NULL;
    while(head1!=nullptr or head2!=nullptr)
    {
        int l1_data = head1->data;
        int l2_data = head2->data;
        int l3_data = l1_data + l2_data + carry ;
        carry = l3_data/10;
        if(prev==NULL)
        {
            curr = new node(l3_data%10);
            head = curr;
            prev = curr;
        }
        else
        {
            curr = new node(l3_data%10);
            prev ->next = curr;
        }
    }
    while(head1!=nullptr)
    {
        int l1_data = head1->data;
        int l3_data = l1_data + carry ;
        carry = l3_data/10;
        if(prev==NULL)
        {
            curr = new node(l3_data%10);
            head = curr;
        }
        else
        {
            curr = new node(l3_data%10);
            prev ->next = curr;
        }
    }
    while(head2!=nullptr)
    {
        int l2_data = head2->data;
        int l3_data = l2_data + carry ;
        carry = l3_data/10;
        if(prev==NULL)
        {
            curr = new node(l3_data%10);
            head = curr;
        }
        else
        {
            curr = new node(l3_data%10);
            prev ->next = curr;
        }
    }
    // carry!=0
    return head;
}
void solve()
{
     
}
int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   int T=1;        cin>>T;
   while(T--){
    solve();
    }
    return 0;
}