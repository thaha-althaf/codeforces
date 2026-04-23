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
        vector<int> p(n+1,0);
        for(int j=1;j<=n;j++)   
            cin>>p[j];
        int ans=0;
        for(int j=1;j<=n;j++)   
        {
            if(j>p[j-1])
                ans++;
        }
        cout<<ans<<endl;
    }
}
