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
        vector<int>a(n);
        vector<int>b(n);
        for(int j=0;j<n;j++)
            cin>>a[j];
        for(int j=0;j<n;j++)
            cin>>b[j];
        int swaps=0;
        bool flag=false;
        for(int j=0;j<n;j++)
        {
            int t=j;
            while(t<n&&a[t]>b[j])
                t++;
            if(t==n)
            {
                flag=true;
                break;
            }
            if(t!=j)
            {
                int tem=a[t];
                a.erase(a.begin()+t);
                a.insert(a.begin()+j,tem);
            }
            swaps+=(t-j);

        }
        if(flag)
            cout<<-1<<endl;
        else
            cout<<swaps<<endl;

    }
}