#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int m=max({a,b,c});
        if((a+b+c-m)==m) 
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}