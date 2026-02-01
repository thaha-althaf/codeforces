#include <iostream>
#include <map>
using namespace std;
 
int main()
{
    int n,p;
    cin>>n;
    int ans[n];
    int aaa=0;
    map<int,int>q;
    for (int i=0;i<n;i++)
    {
        cin>>ans[i]>>p;
        q[p]++;
    }
    for (int i=0;i<n;i++)
        aaa+=q[ans[i]];
    cout<<aaa;
}