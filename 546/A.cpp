#include <iostream>
using namespace std;
 
int main()
{
    int price,own,n;
    cin>>price>>own>>n;
    int loan= (price*n*(n+1)/2)-own;
    if(loan<=0)
        cout<<"0";
    else
        cout<<loan;
 
}