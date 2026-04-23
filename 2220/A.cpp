#include <iostream>
#include <vector>
#include <set>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        vector<int>array(n,0);
        set<int>map;
        for (int j=0;j<n;j++)
        {
            cin>>array[j];
            map.insert(array[j]);
        }
        if(map.size()!=n)
        {
            cout<<-1<<endl;
            continue;
        }
        sort(array.begin(),array.end(),greater<int>());
        for (int j=0;j<n;j++)
            cout<<array[j]<<" ";
        cout<<endl;

    }
}