#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int j=0;j<n;j++)
            cin>>a[j];
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
                a[j+1]+=a[j];
        }
        cout<<a.back()<<endl;
    }
}