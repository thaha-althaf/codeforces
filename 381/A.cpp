#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
       cin>>a[i];
    int p=0,q=0;
    while(!a.empty())
    {
        if(a.back()>a.front())
        {
            p+=a.back();
            a.pop_back();
        }
        else
        {
            p+=a.front();
            a.erase(a.begin());
        }
        swap(p,q);
    }
    if(n%2==1)
        swap(p,q);
    cout<<p<<" "<<q;
}