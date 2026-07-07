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
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        int c=0;
        for(int i=0;i<n;i++)
            if(a[i]%2==1)
                c++;
        if(c%2==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}