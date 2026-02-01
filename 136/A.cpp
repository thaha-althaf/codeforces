#include <iostream>
using namespace std;
 
int main()
{
    int n,p;
    cin>>n;
    int ans[n+1];
    for (int i=1;i<=n;i++)
    {
        cin>>p;
        ans[p]=i;
    }
    for (int i=1;i<=n;i++)
        cout<<ans[i]<<" ";
}