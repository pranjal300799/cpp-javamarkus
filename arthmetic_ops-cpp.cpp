#include<stdio.h>
int main()
{
float prod,sum,diff,a,b;
printf("Enter a and b upto 2 decimal places ");
scanf("%f %f",&a,&b);
sum=a+b;
diff =a-b;
prod=a*b;
printf("sum =%.3f diff =%.4f prod=%.2f\n",sum,diff,prod);
return 0;
}
