#include<iostream>
using namespace std;

class Node
{
   public:
        int data;
    Node *next;
public:
    void insert_ele();
     void display();
};

Node *head=NULL;

void Node :: insert_ele()
{

        int n;
        cin>>n;
        //cout<<"bbb"<<endl;
        Node *temp2=new Node();
        temp2->data=n;
        temp2->next=NULL;
   if (head == NULL)
        {
            head = temp2;
        }
   else
   {
        Node *temp1=new Node();
        temp1=head;
    while(temp1->next!=NULL)
    {
      //  cout<<"aaa"<<endl;
        temp1=temp1->next;
    }

    temp1->next=temp2;
   }


}

void Node :: display()
{
    Node *temp2=head;
    while(temp2!=NULL)
    {
        cout<<temp2->data<<" ";
        temp2=temp2->next;
    }

}


int main()
{
    int nt;
    cin>>nt;
    while(nt--)
    {
        Node ll;
        int no;
        cin>>no;
        for(int i=0;i<no;i++)
        {
            ll.insert_ele();
        }
        int i=1;
        Node *temp=head;
        int c;
        c=int(no/2)+1;
       // cout<<c;
        while(i<c)
        {
            temp=temp->next;
            i++;
        }
        cout<<temp->data;


       cout<<endl;
    }
}

