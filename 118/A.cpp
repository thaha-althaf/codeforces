#include <iostream>
using namespace std;
 
int main()
{
    string s;
    cin>>s;
    string c="aeiouy";
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(int i=0;i<s.length();i++)
    {
        if(c.find(s[i])!=string::npos)
        {
            s.erase(s.begin()+i);
            i--;
        }
        else
        {
            s.insert(s.begin()+i,'.');
            i++;
        }
    }
    cout<<s;
}