#include <iostream>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int z=0;z<t;z++)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        int c=0;
        for(int i=0;i<n-1;i++)
            if(a[i]>a[i+1])
                c++;

        if(k>=2||c==0)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}