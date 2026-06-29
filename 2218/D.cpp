#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        for(int j=1;j<=n;j++)
            cout<<(2*j+1)*(2*j+3)<<" ";
        cout<<endl;
    }
}
