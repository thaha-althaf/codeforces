#include <iostream>
using namespace std;
 
int main()
{
    
    int x[4],maxx=0;
    for(int i=0;i<4;i++)
    {
        cin>>x[i];
        if(x[i]>maxx)
            maxx=x[i];
    }
    for(int i=0;i<4;i++)
    {
        if(x[i]!=maxx)
            cout<<maxx-x[i]<<" ";
    }
    
}