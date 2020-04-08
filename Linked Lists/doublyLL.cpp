#include<iostream>
using namespace std;

class node
{
public:

    int data;
    node *next;
    node *prev;
public:
    void insert_after();
    void reverse_ll();
};

node* head=NULL;

void node :: insert_after()
{
    node *temp=new node();
    temp->data=n;
    temp->next=NULL;
    temp->prev=NULL;
    if(head==NULL)
    {
        head=temp;
    }
    else
    {

    }

}






