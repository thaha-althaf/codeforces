#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    int aa=0,bb=0,cc=0;
    for(int i=0;i<n;i++)
    {
        int a,b,c;
        cin>>a>>b>>c;
        aa+=a;
        bb+=b;
        cc+=c;
    }
    if(aa==0&&bb==0&&cc==0)
        cout<<"YES";
    else
        cout<<"NO";
}