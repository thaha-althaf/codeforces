#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<vector<int>> a(n,vector<int>(2));
    for(int i=0;i<n;i++)
        cin>>a[i][0]>>a[i][1];
    sort(a.begin(),a.end());
    for(int i=1;i<a.size();i++)
    {
        if(a[i-1][1]>a[i][1])
        {
            cout<<"Happy Alex";
            exit(0);
        }
    }
    cout<<"Poor Alex"; 
}
      