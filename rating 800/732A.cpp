#include <iostream>
using namespace std;
 
int main()
{
    int n,k;
    cin>>n>>k;
    int c=n%10;
    if (c==0)
    {
        cout<<"1";
        exit(0);
    }
    for(int i=1;i<10;i++)
    {
        int t=(c*i)%10;
        if(t==0||t==k)
        {
            cout<<i;
            exit(0);
        }
    }
}