#include<stdio.h>
int main()
{
    int x=5;
    int *p;
    p=&x;
    printf("%p\t",p);    
     (*p)++;
    printf("%d\t",*p);
    // x++;
    printf("%d\n",x);
}
/*if apointer has not been intialized the it points to a random address and also has
garbage value 
*p=*p++caused segmentation fault*/