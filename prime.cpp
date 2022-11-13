#include<iostream>
#include<math.h>
void prime(int n)
{
    for(int i=2;i<n;i++)
    {  int fac=0;
        for(int j=2;j<=sqrt(i);j++)
        {
           if(i%j==0)
           {
              fac++;
           }
        }  
    
        if(fac==0)
        {
        printf("%d \n",i);
        }
    }    
}  

int main()
{   int n;
    printf("enter the limit\n");
    scanf("%d",&n); 
    prime(n);
}