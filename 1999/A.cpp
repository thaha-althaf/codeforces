#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {   
        int s=0;
        int n;
        cin>>n;
        while(n>0)
        {
            s+=n%10;
            n/=10;
        }
        cout<<s<<endl;
    }
}