#include <iostream>
using namespace std;
 
int main()
{
    int n,h;
    cin>>n>>h;
    int a,b=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a>h)
            b++;
    }
    cout<<n+b;
}