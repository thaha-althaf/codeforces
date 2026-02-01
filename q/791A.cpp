#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int a,b;	
    cin>>a>>b;
    int x  = (log10(b)-log10(a))/log10(1.5)+1;
    cout<<x;
}