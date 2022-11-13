#include<stdio.h>
void printArray(int *A,int size)
{   for(int i=0;i<size;i++)
    {    printf("%p\n",A+i);
         printf("%p\n",&A[i]);
        printf("%d\n",A[i]);
        printf("%d\n",*(A+i));
        }
        printf("hi");
}
int main()
{    int size;
    int A[]={1,2,3,4,5};
    size=sizeof(A);
    printArray(A,size/4);
}