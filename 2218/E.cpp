#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int ans=0;
        vector<int>p(n);
        for(int j=0;j<n;j++)
            cin>>p[j];
        for(int j=0;j<n;j++)
            for(int k=j+1;k<n;k++)
                ans=max(ans,p[j]^p[k]);
        cout<<ans<<endl;
    }
}
