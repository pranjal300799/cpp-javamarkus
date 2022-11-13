#include<iostream>
using namespace std;
bool nondup(int*A,int n)
    {
     for(int i=0;i<=n-1;i++)
      {
        for(int j=i+1;j<=n-1;j++)
        {
            if(A[i]==A[j])
            {
                return false;
            }
        }
     }
    return true;
    }
int main()
{   int n;
    
    cout<<"Enter size";
    cin>>n;
    int A[n];
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    cout<<nondup(A,n)<<"\n";
}
    