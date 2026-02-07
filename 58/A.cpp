#include <iostream>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    string a="hello";
    int p=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==a[p])
            p++;
    }
    if(p==a.length())
        cout<<"YES";
    else
        cout<<"NO";
}