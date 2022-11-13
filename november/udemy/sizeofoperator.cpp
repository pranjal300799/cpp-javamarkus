#include<iostream>
#include<climits>
using namespace std;
int main()
{
    cout<<"sizeof information"<<endl;
    cout<<"sizeofchar"<<sizeof(char)<<endl;
    cout<<"int"<<sizeof(int)<<endl;
    cout<<"short"<<sizeof(short)<<endl;
    cout<<"long"<<sizeof(long)<<endl;
    cout<<"long long"<<sizeof(long long)<<endl;
    cout<<"long double"<<sizeof(long double)<<endl;
    // cout<<"HI "<<INT_MAX;    mandatory to include climits header file to make this constant work
    //sizeof works without climits too
}