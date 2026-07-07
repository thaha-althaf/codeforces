#include <iostream>
using namespace std;
 
int main()
{
    int a,b;
    cin>>a>>b;
    int d=0;
    int s=0;
    while(a>0 && b>0)
    {
        d++;
        a--;
        b--;
    }
    if(a>0)
        s+=a/2;
    if(b>0)
        s+=b/2;
    cout<<d<<" "<<s;
}