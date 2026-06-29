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
        vector<int> p(3*n,-1);
        int a=3*n;
        int b=1;
        for(int j=0;j<3*n&&b<=a;j++)   
        {
            if((j+1)%3==0)
            {
                p[j]=b;
                b++;
            }
            else
            {
                p[j]=a;
                a--;
            }
        }
        for(int j=0;j<3*n;j++)
            cout<<p[j]<<" ";
        cout<<endl;
    }
}
