#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
 
int main()
{
    long n,k;
    cin>>n>>k;
    vector<long> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    long ans=0;
    for(int i=1;i<a.size();i++)
    {
        long t=a[i]-a[i-1];
        ans=max(t,ans);
    }
    double ini=(double)a[0];
    double fin=(double)k-a[n-1];
    double mid=(double)ans/2;
    cout<<fixed<<setprecision(10)<<max({mid,ini,fin})<<endl;
}
