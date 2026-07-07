#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        int n;
        cin>>n;
        if(n%3==0)
        cout<<"Second"<<endl;
        else
        cout<<"First"<<endl;
    }
}