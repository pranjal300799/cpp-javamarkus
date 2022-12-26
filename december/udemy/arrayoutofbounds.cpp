#include<iostream>
using namespace std;
int main()
{
    int array[]{0};//constructior style initialization is not allowed in arrat initialization
    cout<<array[4]<<endl<<array[5];
    cout<<array[100];//compiler just take the index location add 100 to it and just prints thats why no out of bounds checking
}