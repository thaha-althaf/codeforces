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
        vector<int> towers(n);
        int x;
        cin>>x;
        int smallest=x;
        int ans=x;
        for(int i=1;i<n;i++)
        {
            cin>>x;
            smallest=min(smallest,x);
            ans+=smallest;
        }
        cout<<ans<<endl;
    }
}