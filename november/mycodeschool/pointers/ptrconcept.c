#include<stdio.h>                                                       
void ptrconcept(int *p)
{
printf("%d",p);
printf("%d",*p);
}
int main()
{
int n;
scanf("%d",&n);
ptrconcept(&n);
}
