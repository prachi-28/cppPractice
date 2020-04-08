#include<iostream>
using namespace std;

class Node
{
    int data;
    Node *next;
public:
    void insert_data_front(int n);
    void insert_data_rear(int n);
    void display();
};

Node *head=NULL;


void Node :: insert_data_front(int n)
{
Node *temp=new Node();
temp->data=n;
temp->next=head;
head=temp;
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

void Node :: insert_data_rear(int n)
{


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

int main()
{
    Node n;
    int ch;
   do
   {
       cout<<"\n 1. Insert \n 2. Display \n 3. Insert_Rear \n 4.Exit \n";
        cin>>ch;
        switch(ch)
        {
        case 1:
             int ele;
             cout<<"Enter value to be inserted"<<endl;
             cin>>ele;
             n.insert_data_front(ele);
             break;
        case 2:
             n.display();
             break;
        case 3:
             int el;
             cout<<"Enter value to be inserted"<<endl;
             cin>>el;
             n. insert_data_rear(el);
             break;

        case 4:
             break;
        default :
             cout<<"Please enter a valid option"<<endl;

   }
}while(ch<=4);
}

