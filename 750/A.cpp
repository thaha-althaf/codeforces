#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    double n,k;
    cin>>n>>k;
    double c=(240-k)*2/5;
    double a=(sqrt(1+4*c)-1)/2;
    if(a>n)
        cout<<n;
    else
        cout<<(int)a;
}