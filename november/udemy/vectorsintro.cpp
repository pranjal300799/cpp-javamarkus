#include<iostream>
#include<climits>
#include<vector>
using namespace std;
int main()
{
    int array[10];//has garbage values
    int array_2[]{1,3,4,5,6};//list style initialization with complier automatically calculating the size at compile time
    int array3[4]{};//initialization of all 4 to 0
    int array4[4]{0};//initialization of all 4 to 0
    int array5[5]{100};//initialization of only 1st element to 100 rest 0
    vector<int> scores(8);//auto initialization to 0 on declaration
    
}