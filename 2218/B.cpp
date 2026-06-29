#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        vector<int> n(7,0);
        for(int j=0;j<7;j++)
            cin>>n[j];
        sort(n.begin(),n.end());
        int ans=0;
        for(int j=0;j<7;j++)
        {
            if(j<6)
                n[j]=n[j]*-1;
            ans+=n[j];
        }
        cout<<ans<<endl;
    }
}
