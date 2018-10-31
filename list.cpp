#include<iostream>
using namespace std;

class node
{
    public:
    int value;
    node *ptr;
    node()
    {
       ptr=NULL;
    }
};

node *x,*ptr1,*head,first,second,third,fourth;
int num,num2,i=0;

void search_node()
{
    cout<<"Enter the Number to be searched : ";
    cin>>num;

    ptr1=head;

    while(ptr1!=NULL)
    {
        if(ptr1->value==num)

           {
             cout<<"FOUND"<<endl;
             break;
           }
          ptr1=ptr1->ptr;
    }
    if(ptr1==NULL)
        cout<<"Element not Found : "<<endl;
}

void insert_node_operator()
{
  cout<<"Press : 1>Insert_start   2>Insert_mid    3>Insert_end"<<endl;
  cin>>num2;
  node *five=new node;
  int a;
  cout<<"Enter the number to be added : ";
  cin>>a;
  five->value=a;

  if(i==30)
    cout<<"Node Limit Exceeds ";

  if(num2==1)
  {
   x=head;
   head=five;
   five->ptr=x;
  }

  if(num2==2)
  {

   cout<<"Enter the node where to add next node : ";
   cin>>num;
   ptr1=head;

   while(ptr1->value!=num)
      {
          ptr1=ptr1->ptr;
      }

   x = ptr1->ptr;
   ptr1->ptr=five;
   five->ptr=x;
  }

  if(num2==3)
  {
    ptr1=head;
    while(ptr1->ptr!=NULL)
      {
          ptr1=ptr1->ptr;
      }

    ptr1->ptr=five;
    five->ptr=NULL;
  }
 cout<<"INSERTION COMPLETE"<<endl;
}

void delete_node_operator()
{
    cout<<"Press : 1>Delete_start   2>Delete_mid    3>Delete_end"<<endl;
    cin>>num2;

    if(num2==1)
    {
        x=head->ptr;
        head=x;
    }

    if(num2==2)
    {
     cout<<"Enter the value to be deleted : ";
     cin>>num;

     node *ptr2;
     ptr1=head;

     while(ptr1->value!=num)
     {
       ptr2=ptr1;
       ptr1=ptr1->ptr;
     }

     x=ptr1->ptr;
     ptr2->ptr=x;
    }

    if(num2==3)
    {
     node *ptr2;
     ptr1=head;

     while(ptr1->ptr!=NULL)
      {
       ptr2=ptr1;
       ptr1=ptr1->ptr;
      }

     ptr2->ptr=NULL;
    }
 cout<<"DELETION COMPLETE"<<endl;
}

void print()
{
  cout<<"Update List is : ";
    ptr1=head;

    while(ptr1!=NULL)
    {
        cout<<ptr1->value<<" ";
        ptr1=ptr1->ptr;
    }
   cout<<endl;
}

int main()
{
    head = &first;
    first.value=3; first.ptr=&second;
    second.value=5; second.ptr=&third;
    third.value=6; third.ptr=&fourth;
    fourth.value=9;

    cout<<"PRESENT LIST : 3 5 6 9"<<endl<<"---------------------------------"<<endl;

    int num1;

    do
    {
     cout<<"Press : 1>Insert_Node    2>Delete_Node   3>Search_Node   4>print_list   5>Exit"<<endl<<">>";
     cin>>num1;

      if(num1==1)
        insert_node_operator();

      if(num1==2)
        delete_node_operator();

      if(num1==3)
         search_node();

      if(num1==4)
         print();

    }while(num1!=5);
  return 0;
}
