#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n,q;
    cin>>n;
    vector<int> p(n);
    for (int i=0;i<n;i++)
        cin>>p[i];
    sort(p.begin(),p.end());
    cin>>q;
    while(q--)
    {
        int t;
        cin>>t;
        int i=0,j=n-1;
        while(i+1<j)
        {   int m=(j+i)/2;
            if(t>=p[m])
                i=m;
            else if (t<p[m])
                j=m;
        }
        if(t<p[i])
            cout<<i<<endl;
        else if(t>=p[i]&&t<p[j])
            cout<<i+1<<endl;
        else if(t>=p[j])
            cout<<j+1<<endl;
    }
}