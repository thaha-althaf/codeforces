#include <iostream>
using namespace std;
 
int main()
{
    long long n;
    cin>>n;
    long long ans=0;
    
    if(n%2==0)
        ans+=n/2;
    else
        ans=-1*(n+1)/2;
    cout<<ans;
}