#include <iostream>
using namespace std;
 
int main()
{
    int n;
    string s;
    cin>>n>>s;
    int c=0;
    for(auto &x:s)
        if(x=='D')
            c++;
    if( 2*c==n )
        cout<<"Friendship";
    else if( 2*c>n )
        cout<<"Danik";
    else 
        cout<<"Anton";
}