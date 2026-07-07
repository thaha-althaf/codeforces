#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a+b==c)
            cout<<"+"<<endl;
        else
            cout<<"-"<<endl;
    }
}