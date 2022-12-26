#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<string> names;
    names.push_back("pranjal");
    names.push_back("kumar");
    int i=0;
    for(i=0;i<names.size();i++)
    {
        cout<<names.at(i)<<endl;
    }
}