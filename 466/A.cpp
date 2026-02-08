#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int travel,special_travel,price,special_price;
    cin>>travel>>special_travel>>price>>special_price;
    long long ans1=travel*price;
    int poss=travel/special_travel;
    int rem=travel-(poss*special_travel);
    long long ans2=poss*special_price;
    if(rem*price<=special_price)
        ans2+=rem*price;
    else
        ans2+=special_price;
    cout<<min(ans1,ans2);
}
