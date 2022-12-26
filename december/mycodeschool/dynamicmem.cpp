#include<iostream>
#include<stdio.h>
using namespace std;
void print_dynamic_block_address(int *p)
{
      cout<<p;
}

int main()
{
    int n{0};
    cout<<"enter the size of array you want"<<endl;
    cin>>n;
    int* dynamicarray1=new int[n];
    print_dynamic_block_address(dynamicarray1);
    

}