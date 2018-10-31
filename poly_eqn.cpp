#include<iostream>
using namespace std;

struct Node
{
    int val;
    int val1;
    Node *next;
};

class linked
{   int num;
    public:
    Node *start;
    linked()
    {start = NULL;}
    Node* createNode(int value,int value1)
    {
      Node *temp;
      temp = new(struct Node);
      temp->val = value;
      temp->val1 = value1;
      temp->next = NULL;
      return temp;
    }

	void make_list()
	{
		int value,value1,n;
		cout<<"Enter the number of terms: ";
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cout<<"Enter the cofficient and power : ";
			cin>>value>>value1;
			Node *temp = createNode(value,value1);
			temp->next = start;
			start = temp;
		}
	}
    friend void add(linked ,linked);
    void print_list()
    {
	    Node *ptr;
	    ptr = start;
	    while(ptr != NULL)
	    {
	        cout<<ptr->val<<"x^"<<ptr->val1<<" ";
            ptr = ptr->next;
         }
         cout<<endl<<endl;
     }
};

void add(linked a,linked b)
{
	Node *ptr,*ptr1;
        ptr=a.start;
        ptr1=b.start;
        while(ptr!=NULL)
        {
        	while(ptr1!=NULL)
        	{
        		if(ptr->val1==ptr1->val1)
        		{
        			ptr->val=ptr->val+ptr1->val;
        			break;
        		}
      			ptr1=ptr1->next;
    		}
    		ptr=ptr->next;
  	}
}
int main()
{
  cout<<"NAME     : Abhishek Rana"<<endl;
  cout<<"ROLL_NO. : 1706386 "<<endl;
  cout<<"CLASS    : CSE-A1  "<<endl;
  cout<<"----------------------------------------"<<endl<<endl;
  linked l1,l2;
  cout<<"Enter the 1st equation : "<<endl;
  cout<<"--------------------------"<<endl;
  l1.make_list();
  cout<<"Enter the 2nd equation : "<<endl;
  cout<<"--------------------------"<<endl;
  l2.make_list();
  add(l1,l2);
  cout<<"\n-------------------------"<<endl;
  cout<<"\nSUM : ";
  l1.print_list();
  return 0;
}
