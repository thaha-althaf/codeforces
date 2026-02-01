#include <iostream>
using namespace std;
 
int main()
{
    string n;
    cin>>n;
    bool flag=true;
    int c=0;
    for(auto &x:n)
        if(x!='4'&&x!='7')
            flag=false;
        else
            c++;
    if( flag && ( c==4 || c==7 ) )
        cout<<"YES";
    else if (c==4 || c==7)
        cout<<"YES";
    else
        cout<<"NO";
}