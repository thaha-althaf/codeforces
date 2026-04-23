#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        bool f=false;
        int n,m;
        cin>>n>>m;
        vector<int>array(n,0);
        int mx=0;
        for (int j=0;j<n;j++)
            cin>>array[j];   
        for (int j=0;j<n;j++)
        {         
            if(j>0 && array[j-1]!=array[j])
                mx=1;
            else
                mx++;
            if(mx>=m)
            {
                f=true;
                break;
            }
        }
        if(f)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;
    }
}