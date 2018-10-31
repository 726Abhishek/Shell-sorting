#include<iostream>
using namespace std;

int main()
{
  int n,z;
  cout<<"Enter the no of elemnts : ";
  cin>>n;
  int a[n];
  cout<<"Enter the no of elemets : ";
  for(int i=0;i<n;i++)
   cin>>a[i];
 if(n%2==0)
  {  int d=n;
     while(d!=1)
      {
          d=d/2;
          for(int j=0;j<n-d;j++)
          {
           if(a[j]>a[j+d])
           swap(a[j],a[j+d]);
          }
      }
  }
  else
  {
    int d=n-1;
     while(d!=1)
      {
          d=d/2;
          for(int j=0;j<n-d;j++)
          {
           if(a[j]>a[j+d])
             swap(a[j],a[j+d]);
          }
      }
      for(int i=0;i<n;i++)
        {
            if(a[n]<a[i])
             z=i;
        }
     int temp=a[n-1];
   for(int k=n-1;k<=z;k++)
   {
      if(k==z)
        a[z]=temp;
      else
       a[k+1]=a[k];

   }
  }

  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
  return 0;
}
void swap(int &x,int &y)
{
  int temp=x;
  x=y; y=temp;
}

