#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    for (int i=0;i<n;i++)
        cin>>a[i];
    sort(a.rbegin(),a.rend());
    for (int i=0;i<a.size();i++)
    {
        if(a[i]==4)
            continue;
        else if(a[i]+a.back()>4)
            continue;
        while(i!=a.size()-1&&a[i]+a.back()<=4)
        {
            a[i]+=a.back();
            a.pop_back();
        }
    }
    cout<<a.size();
}