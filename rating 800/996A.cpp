#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int ans=0;
    if(n/100>0)
    {
        int q=n/100;
        n -= (q*100);
        ans+=q;
    }
    if(n/20>0)
    {
        int q=n/20;
        n -= (q*20);
        ans+=q;
    }
    if(n/10>0)
    {
        int q=n/10;
        n -= (q*10);
        ans+=q;
    }
    if(n/5>0)
    {
        int q=n/5;
        n -= (q*5);
        ans+=q;
    }
    if(n/1>0)
    {
        int q=n/1;
        n -= (q*1);
        ans+=q;
    }
    cout<<ans;
}