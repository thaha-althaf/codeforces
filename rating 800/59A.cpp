#include <iostream>
using namespace std;
 
int main()
{
    string s;       
    cin>>s;
    int l=0;
    for(auto &x:s)
        if(islower(x))
            l++;
    if(2*l>=s.length())
       transform(s.begin(),s.end(),s.begin(),::tolower);
    else
        transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s;
}