#include <iostream>
using namespace std;
 
int main()
{
    int n,p;
    cin>>n>>p;
    int maxx=p,minn=p,ans=0;
    while(--n)
    {
        cin>>p;
        if(p<minn)
        {
            minn=p;
            ans++;
        }
        else if(p>maxx)
        {
            maxx=p;
            ans++;
        }
    }
    cout<<ans;
}