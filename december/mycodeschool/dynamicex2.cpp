#include<iostream>
using namespace std;
#include<stdlib.h>
int sumOfArray(int *p,int size)
{
   int i{0}
   ,sum{0};
   for(;i<size;i++)
   {
      sum=sum+p[i];
   }
   return sum;
}
int main()
{
    cout<<"enter the size of array you want"<<endl;
    int n{0};
    cin>>n;
    int *p;
    p=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
       cout<<"enter the "<<i<<"th element"<<endl;
       cin>>*(p+i);
    }
    cout<<sumOfArray(p,n);
}