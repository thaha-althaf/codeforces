#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int cap=0,minn=0;
    for(int i=0;i<=n;i++)
    {
        int a,b;
        cin>>a>>b;
        cap+=(b-a);
        minn=max(minn,cap);
    }
    cout<<minn;
}