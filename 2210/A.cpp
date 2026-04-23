#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        for(int j=a;j>0;j--)   
            cout<<j<<" ";
        cout<<endl;
    }
}
