#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,x,y;
        cin>>n>>x>>y;
        int a[n];
        long long total=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            total+=(a[i]/x)*y;
        }
        long long ans=0;
        for(int i=0;i<n;i++)
        {
            long long temp=total-(a[i]/x)*y+a[i];
            ans=max(ans,temp);
        }
        cout<<ans<<endl;
    }
}
