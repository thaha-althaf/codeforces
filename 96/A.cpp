#include <iostream>
using namespace std;
 
int main()
{
	string s;
	cin>>s;
    int a=1;
    for(int i=1;i<s.length();i++)
    {
        if(a==7)
            break;
        if(s[i-1]==s[i])
            a++;
        else
            a=1;
    }
    if(a==7)
        cout<<"YES";
    else
	    cout<<"NO";
}