#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int prev;
    cin>>prev;
    int ans=1;
    for (int i=1;i<n;i++)
    {
        int t;
        cin>>t;
        if(prev!=t)
        {
            prev=t;
            ans++;
        }
    }
    cout<<ans;
}