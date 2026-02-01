#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int p=0;
    int uc=0;
    for(int i=0;i<n;i++)
    {
        int t;
        cin>>t;
        if(t>0)
            p+=t;
        else if(t==-1&&p==0)
            uc++;
        else if(t==-1&&p>0)
            p--;
    }
    cout<<uc;
}