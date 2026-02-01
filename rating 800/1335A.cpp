#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int s;
        cin>>s;
        if(s%2==0)
            cout<<s/2-1<<endl;
        else
            cout<<s/2<<endl;
    }
}