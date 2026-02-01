#include <set>
#include <iostream>
using namespace std;
 
int main()
{
    set<char> ss;
    string s;
    getline(cin,s);
    for(auto &x:s)
    {
        if(x!='{'&&x!='}'&&x!=','&&x!=' ')
            ss.insert(x);
    }
    cout<<ss.size();
}