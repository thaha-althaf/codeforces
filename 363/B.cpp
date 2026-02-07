#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<int> ans=a;
    for(int i=n-2;i>=n-k;i--)
        ans[i]+=ans[i+1];
    for(int i=n-k-1;i>=0;i--)
        ans[i]=+ans[i]+ans[i+1]-a[i+k];
    int m=INT_MAX,mm=-1;
    for(int i=0;i<n-k+1;i++)
    {
        if(ans[i]<m)
        {
            m=ans[i];
            mm=i;
        }
    }
    cout<<mm+1;

}
      