#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
	double a,b,c;
    cin>>a>>b>>c;
    long long ans=ceil(a/c)*ceil(b/c);
    cout<<ans;
}