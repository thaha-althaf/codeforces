#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int x;
        cin>>x;
        int t=0;
        while(x>0)
        {
            t++;
            x/=10;
        }
        int ans=pow(10,t)+1;
        cout<<ans<<endl;
    }
}