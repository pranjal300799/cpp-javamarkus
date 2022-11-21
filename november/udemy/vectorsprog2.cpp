#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vector1;
    vector <int> vector2;
    cout<<"enter the 1st element of vector 1 and the 2nd"<<endl;
    int score1,score2;
    cin>>score1>>score2;
    vector1.push_back(score1);
    vector1.push_back(score2);
    cout<<vector1.at(0)<<endl<<vector1.at(1)<<endl;
    cout<<"enter the 1st element and the 2nd of vector2"<<endl;
    cin>>score1>>score2;
    vector2.push_back(score1);
    vector2.push_back(score2);
    score1=40;/*to remind you that all the values
     passed till now in the () of vector methods
      use call by value so any change to the
       value passed in the parentheses wont 
       be reflected in the vector*/
    cout<<"cahnged score value"<<score1<<endl;
    cout<<vector2.at(0)<<endl<<vector2.at(1)<<endl;
    vector<vector<int>> vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout<<vector_2d.at(0).at(0)<<"'\t'"<<vector_2d.at(0).at(1)<<endl;
    cout<<vector_2d.at(1).at(0)<<"'\t'"<<vector_2d.at(1).at(1)<<endl;
    vector1.at(0)=1000;
    cout<<vector_2d.at(0).at(0)<<" "<<vector_2d.at(0).at(1)<<endl;

    
}//point regarding the call by value
//a 2d vector is a vector of vectors
//this program is to know how to use a vector 
//we created a 2D vector in which vectors were the values