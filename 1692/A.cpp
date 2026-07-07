#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int co=0;
        if(b>a)
            co++;
        if(c>a)
            co++;
        if(d>a)
            co++;
        cout<<co<<endl;
    }
}