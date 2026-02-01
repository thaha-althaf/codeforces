#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    double ans=0.0;
    for (int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        ans+=t;
    }
    ans/=n;
    cout<<fixed<<setprecision(12)<<ans;
}