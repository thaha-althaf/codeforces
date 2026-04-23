#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int ans=0;
    int i=0;
    while(n>0)
    {
        int t=n%10;
        if(t>9-t)
            t=9-t;
        t=t+(10*i);
        ans+=t;
        n/=10;
        i++;
    }
    cout<<ans;
}
