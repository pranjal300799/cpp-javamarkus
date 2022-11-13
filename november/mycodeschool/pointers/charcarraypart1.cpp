#include<iostream>
using namespace std;
int main()
{
    char C[5];
    C[0]= 'j';
    C[1]='O';
    C[2]='\0';
    C[3]='N';
    int i=0;
    while(i<4)
    {
        cout<<*(C+i);
        i++;
    }
    
    printf("\n%s\n",C);
    //no need of loop prints the whole array till it encounters terminator
    //C[2]='\0';
}