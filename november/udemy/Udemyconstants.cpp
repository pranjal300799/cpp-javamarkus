#include<iostream>
using namespace std;
int main()
{  const double cost_big_room{35};
    const double cost_small_room{25};
    const double tax_rate{0.06};
    // double total{};
    
    cout<<"How many small rooms would you like to be cleaned"<<endl;
    int nsmall_rooms{};
    cin>>nsmall_rooms;
    cout<<"How many big rooms would you like to be claeaned"<<endl;
    int nbig_rooms{};
    cin>>nbig_rooms;
    double total{(nsmall_rooms*cost_small_room)+(cost_big_room*nbig_rooms)};
    double estimate{total+(total*tax_rate)};
    cout<<"cost is :"<<total<<endl;
    cout<<"tax is :"<<total*tax_rate<<endl;
    cout<<"total estimate is"<<estimate<<endl;
    cout<<"valid for 30 days"<<endl;
}